/* pointer for int(which has 4 byte) an be 4 byte (for 32bit system) and also 8 byte (for 64bit system) */

#include <stdio.h>

// Test size of pointer
// int main(void)
// {
//   int num = 7;
//   int * pnum;
//   pnum = &num;
//   printf("Size of pnum : %d", sizeof(pnum));
//   return 0;
// }


int main(void)
{
  int num1 = 100, num2 = 100;
  int * pnum;

  pnum = &num1; // save num1's location
  (*pnum) += 30; // Add 30 to the value that pnum indicates

  pnum = &num2;
  (*pnum) -= 30;

  printf("num1: %d and num2: %d", num1, num2);


}
