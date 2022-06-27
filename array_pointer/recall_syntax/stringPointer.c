#include <stdio.h>

int main(void){

  char str1[] = "My String"; // constant pointer
  char * str2 = "Your String"; // you can refresh str2 poineter

  printf("%s\n", str1);
  printf("%s\n", str2);
  // str1 = "wow\n"; Cant do this
  str2 = "HEHEHE\n";
  printf("%s", str2);



}
