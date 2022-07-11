/* pointer for int(which has 4 byte) can be 4 byte (for 32bit system) and also 8 byte (for 64bit system) */

#include <stdio.h>

/* Test size of pointer */
int main(void)
{
  int num = 7;
  int num2 = 10;
  int * pnum;
  pnum = &num; // pnum indicates the memory location of num
  printf("pnum is %d\n", *pnum);

  pnum = &num2;
  printf("pnum is %d\n", *pnum);

  printf("Size of pnum : %d", sizeof(pnum)); // my comp is 64bit so size of pointer is 8
  return 0;
}


// int main(void)
// {
//   int num1 = 100, num2 = 100;
//   int * pnum;
//
//   pnum = &num1; // save num1's location
//   (*pnum) += 30; // Add 30 to the value that pnum indicates
//
//   pnum = &num2;
//   (*pnum) -= 30;
//
//   printf("num1: %d and num2: %d", num1, num2);
//
//
// }
