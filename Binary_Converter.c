#include <stdio.h>

/* C accepts 8 and 16 진수! */
/*
int main(void){
  int num1 = 10;
  int num2 = 0xA; // starts with 0x it's 16진수
  int num3 = 012; // starts with 0, it's 8진수
  printf("%d, %d, %d", num1, num2, num3);
}
*/

/*bit calculation */
int void(main){
  int num1 = 15; //00000000 00000000 00000000 00001111
  int num2 = 20; //00000000 00000000 00000000 00010100
  int num3 = num1 & num2; // 00000000 00000000 00000000 00000100 = 4
  printf("%d", num3);

  // <<3 shift bits left for 3
  // >>2 shift bits right for 2
  return 0;
}



/* Change into binary and 16진수 */

// int void(main){
//
// }
