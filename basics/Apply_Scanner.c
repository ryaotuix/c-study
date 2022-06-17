#include <stdio.h>
#include <math.h>

/* Let's delve into scanner in C */

/*Task 1: return sum and multiple of two inputs*/

// int main(void){
//   int num1,num2;
//   printf("What are two numbers?\n");
//   scanf("%d %d", &num1, &num2);
//   int sum = num1 + num2;
//   int mul = num1 * num2;
//   printf("Sum is %d, and the Mul is %d", sum, mul);
// }


/*Task 2: Simple calculation*/
// int main(void){
//     int num1,num2,num3;
//     printf("What are the three numbers?\n");
//     scanf("%d %d %d", &num1, &num2, &num3);
//     int sum = num1 + num2 + num3;
//     printf("%dX%d+%d = %d", num1, num2, num3, sum);
// }


/*Task 3: Simple power*/
// int main(void){
//   int num;
//   scanf("%d",&num);
//   int power = pow(num,2);
//   printf("%d squared is %d", num, power);
// }

/*Task 4: Modulus*/
int main(void){
  int num1,num2;
  scanf("%d %d", &num1, &num2);
  int mod = num1 % num2;
  int div = num1 / num2;
  printf("%d divided by %d is %d and the remainder is %d", num1, num2, div, mod);
}
