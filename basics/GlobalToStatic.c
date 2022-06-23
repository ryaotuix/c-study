#include <stdio.h>

int AddToTotal(int num)
{
  static int total; // automatically 0
  total += num;
  return total;
}

int main(void)
{
  int num, i;
  for(i=0; i<3; i++)
  {
    printf("Type%d : ", i+1);
    scanf("%d", &num);
    printf("Current: %d \n", AddToTotal(num));
  }
  return 0;
}
