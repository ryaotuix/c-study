#include <stdio.h>

/* How do we check the size of data type? */

// int main(void) {
//   char ch = 'a';
//   int i = 100;
//   double d = 3;
//   printf("Size of char is %d\n", sizeof(ch));
//   printf("Size of int is %d\n", sizeof(i));
//   printf("Size of doulbe is %d\n\n", sizeof(d));
//
//
//   printf("Size of char is %d\n", sizeof(char));
//   printf("Size of int is %d\n", sizeof(int));
//   printf("Size of long is %d\n", sizeof(long));
//   printf("Size of long long is %d\n", sizeof(long long));
//   printf("Size of float is %d\n", sizeof(float));
//   printf("Size of doulbe is %d\n", sizeof(double));
//   return 0;
// }


// Short stores 2 bytes -32768 ~ 32767 Should we always use short instead of int?
// WE CANNOT DETERMINE DATATYPE SOLELY BY ITS SIZE

int main(void){
  char c1 = 1, c2 = 2, result1 = 0;
  short s1 = 1, s2 = 2, result2 = 0;

  printf("Size of c1 : %d, c2 : %d\n", sizeof(c1), sizeof(c2));
  printf("Size of s1 : %d, s2 : %d\n", sizeof(s1), sizeof(s2));

  printf("Size of char add : %d\n", sizeof(c1+c2));
  printf("Size of short add : %d\n", sizeof(s1+s2));
  // Why are these two 4?? CPU automatically converts to int datatype cuz its ez for it

  // result1 = c1 + c2;
  // result2 = s1 + s2;
  // printf("Size of c1 + c2 : %d\n", sizeof(result1));
  // printf("Size of s1 + s2 : %d\n\n", sizeof(result2));
  //
  // int a = 90, b = 128, c = 1;
  // printf("%d in char = %c\n", a, a);
  // printf("%d in char = %c\n", b, b);
  // printf("%d in char = %c\n", c, c);


  /*
  Result: calculation (+,-,*,/) doesn't get faster by data DATATYPE
  But if the Data Quantity is bigger, it reduces the size of data
  */
  return 0;
}
