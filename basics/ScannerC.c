#include <stdio.h>

/* Scanner in C what is different from Python and Java? */

int main(void) {
  /* This is wrong */

  // int sum;
  // int num1, num2;
  // printf("I will calculate the sum!\n");
  // scanf("What is your first number : %d?\n",&num1);
  // scanf("What is your second number : &d?\n",&num2);
  // sum = num1 + num2;
  // printf("The sum is %d", sum);

  /* SCANNER ONLY READS NO WORDS CAN BE DONE LIKE PYTHON */

  // int num1, num2, sum;
  // printf("I will calculate the sum!\n");
  // printf("first num:");
  // scanf("%d", &num1);
  // printf("second num:");
  // scanf("%d", &num2);
  // sum = num1 + num2;
  // printf("the sum is %d!", sum);

  /* Now practice consecutive scanner */

  printf("I will calculate the sum!\n");
  printf("Now type 3 integers consecutively\n");
  int num1, num2, num3, sum;
  scanf("%d%d%d", &num1, &num2, &num3); // Space is Necessary
  sum = num1 + num2 + num3;
  printf("Sum is %d", sum);
}
