#include <stdio.h>

int main(void) {
  int myAge = 20;
  printf("My age is %d. In octadecimal, it is %#o; in hexadecimal, it is %#X\n", myAge, myAge, myAge);
  // %X means to convert to hexademical or CAP
  // %x means to lower case
  // %#X means it shows it is hexadecimal with prefix '0X'


  printf("\n");


  double dnum = 0.12345678;
  printf("E notation %E\n", dnum);
  // %E means E notation
  printf("regularly %f\n", dnum);


  printf("\n");


  double d1 = 1.23e-3;
  double d2 = 1.23e-4;
  double d3 = 1.23e-5;
  printf("%g \n", d1);
  printf("%g \n", d2);
  printf("%g \n", d3);
  // %g automatically decides to use E or not


  printf("\n");

  printf("%-8s %-20s %5s\n", "Name", "Major", "Year");
  printf("%-8s %-20s %5s\n", "Harrison", "Data Science", "Sophomore");
  printf("%-8s %-20s %5s\n", "Sam", "Computer Science", "Sophomore");

}
