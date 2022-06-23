#include <stdio.h>

void SimpleFunction(void)
{
  static int num1=0; // NO initialize, then automatically 0
  register int num2 = 3; // allocates in register memory (FAST)
  int num2=0; // NO initialize, then random trash value
  num1++, num2++;
  printf("static: %d, local: %d\n", num1, num2);
}

int main(void)
{
  int i;
  for(i = 0; i<3; i++)
  {
    SimpleFunction();
  }
  return 0;
}

// static local variable : Like global variable but can be accessed in one function
// register (local) variable saves in special memory (usually when its used a lot)
