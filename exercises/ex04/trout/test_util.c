#include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <assert.h>
#include "util.c"
#include "../minunit.h"

int tests_run = 0;

static char *test_icmpcode_v4() {
    mu_assert(icmpcode_v4(0), "network unreachable");
    return 0;
}

static char * all_tests() {
    mu_run_test(test_icmpcode_v4);
    return 0;
}

int main(int argc, char **argv) {
     char *result = all_tests();
     if (result != 0) {
         printf("%s\n", result);
     }
     else {
         printf("ALL TESTS PASSED\n");
     }
     printf("Tests run: %d\n", tests_run);

     return result != 0;
 }
