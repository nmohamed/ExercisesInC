/*
  HW1 - Nora Mohamed
  Card game that keeps track of your score.
*/

#include <stdio.h>
#include <stdlib.h>

/*
  Checks card value to make sure it is between understandable bounds
*/
int check_if_card_is_valid(int val) {
  if ((val < 1) || (val > 10)) {
    puts("I don't understand that value!");
    return 0;
  }
  return val;
}

/*
  Converts face cards into readable integer values.
*/
int convert_face_card(char card_name[3]){
  switch(card_name[0]){
    case 'K':
    case 'Q':
    case 'J':
      return 10;
    case 'A':
      return 1;
  }
  return check_if_card_is_valid(atoi(card_name));
}

/*
  Updates 'count' variable. If card provided is a number 2-6, count increases.
  If card is 10 or a face card, count decreases. Returns count.
*/
int update_count(int val, int count){
  if ((val > 1) && (val < 7)) {
    count++;
  } else if (val == 10) {
    count--;
  }
  return count;
}

/*
    Run card game. Request's input for name of card. If input is 'X', exits.
    Otherwise 'count' is updated. Prints updated count.
*/
int main(){
  char card_name[3];
  int count = 0;
  int val;
  while (1) {
    puts("Enter the card_name: ");
    scanf("%2s", card_name);
    if(card_name[0] == 'X')
      break;
    val = convert_face_card(card_name);
    count = update_count(val, count);
    printf("Current count: %i\n", count);
  }
  return 0;
}
