#include <stdio.h>

int main(void)
{
  int num = 20;
  printf("num is %d\n", num);
  const int * ptr = &num; // If const goes to the first,
  // *ptr = 30; WE CANT DO THIS
  num = 30; // but we can do this
  printf("num is %d\n", num);

  int * const ptr2 = &num; // if const goes before the name, it indicates the address constantly
}
