#include <stdio.h>
void Add(int val);
int num; // Global Variable automatically initiated as 0

int main(void)
{
  int num = 3; // local variable is prior than global variable
  printf("num: %d \n", num);
  Add(3);
  printf("num: %d \n", num);
  num++;
  printf("num: %d \n", num);
  return 0;
}


void Add(int val)
{
  num += val;
}
