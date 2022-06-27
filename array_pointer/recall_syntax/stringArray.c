#include <stdio.h>

int main(void)
{
  char * strArr[] = {"Simple", "String", "Array"}; //Any value in "" returns address of the value
  // it's like {0x000, 0x000, 0x000}
  printf("%s \n", strArr[0]);
  printf("%s \n", *strArr);
  printf("%s \n", strArr[1]);
  printf("%s \n", *(strArr + 1));
  printf("%s \n", strArr[2]);
  printf("%s \n", *(strArr +2));

}
