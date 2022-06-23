/* 2^k <= n
Type n and return maximum k */
#include <stdio.h>

int main(void){
  int num;
  printf("What is your number: ");
  scanf("%d", &num);

  if (num<1) {
    printf("ugh");
    return 0;
  }


  int k = 0;
  int res = 1;

  while (res <= num/2)
  {
    res *= 2;
    k++;
  }



  printf("maximum k = %d and result is %d\n", k, res);
}
