
#include <stdio.h>
#include <stdlib.h>
#include <glib.h>
#include <glib/gprintf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

void print_hash(gpointer key, gpointer value, gpointer user_data){
    char *pkey = key;
    printf("%s - %i\n", pkey, GPOINTER_TO_INT(value));
}

int main(int argc, char** argv){
    GScanner *gs = g_scanner_new(NULL);
    gint fd = open("words.txt", O_RDONLY);
    g_scanner_input_file(gs, fd);

    GHashTable *hash = g_hash_table_new(g_str_hash, g_str_equal);

    while(g_scanner_eof(gs) == FALSE){
      g_scanner_get_next_token(gs);
      // NOTE: for some reason, single characters are interpretted as NULL. idk why
      if(gs->value.v_string == NULL){
        continue;
      }
      int value = GPOINTER_TO_INT(g_hash_table_lookup(hash, gs->value.v_string)) + 1;
      g_hash_table_insert(hash, g_strdup(gs->value.v_string), GINT_TO_POINTER(value));
    }

    g_hash_table_foreach(hash, print_hash, NULL);
    g_hash_table_destroy(hash);
    g_scanner_destroy(gs);
    return 0;
}
