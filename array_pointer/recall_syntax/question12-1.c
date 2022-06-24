#include <stdio.h>

int main(void)
{
  int num1 = 10, num2 = 20;
  int * pnum1 = &num1, * pnum2 = &num2;
  int * temp;

  (*pnum1) += 10;
  (*pnum2) -=10;

  printf("currently num1 : %d, num2: %d\n", num1, num2);

  // Switch what pointers indicate;
  // CANT DO THIS:  pnum1 = &num2, pnum1 = &num1;
  temp = pnum1;
  pnum1 = pnum2, pnum2 = temp;

  printf("currently pnum1 stores: %d, pnum2 stores: %d", *pnum1, *pnum2);
  return 0;
}
