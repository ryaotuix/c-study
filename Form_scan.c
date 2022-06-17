#include <stdio.h>

int main(void){
  // int num1, num2, num3;
  // printf("Type three integers: ");
  // scanf("%d %o %x", &num1, &num2, &num3);
  //
  // printf("Print three integers: ");
  // printf("%d, %d, %d \n", num1, num2, num3);
  // printf("%d, %#o, %#x \n", num1, num2, num3);
  //
  // printf("\n\n");

  float f1;
  double d1;
  long double ld1;
  printf("1. Type a number in e notation: ");
  scanf("%f", &f1);
  printf("You typed %f \n", f1);

  printf("2. Type a number in e notation: ");
  scanf("%lf", &d1);
  printf("You typed %f \n", d1);

  printf("3. Type a number in e notation: ");
  scanf("%Lf", &ld1);
  printf("You typed %Lf \n", ld1);

  /*
  float, double, long double
  print: f, f, Lf
  scan: f, lf, Lf
  */
}
