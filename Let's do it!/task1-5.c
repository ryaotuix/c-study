/* Prime number */

#include <stdio.h>

int isPrime(int num);

void prime(int num);

int main(void)
{
  int num;
  printf("how many prime number do you want?");
  scanf("%d", &num);

  int count = 0, prime = 2;
  while (count < num)
  {
    if (isPrime(prime) == 1) // if it is prime
    {
      printf("%d ", prime);
      count++; // print and count + 1
    }
    prime++;
  }
  return 0;

}



int isPrime(int num)
{
  if (num == 2) // if 2 it is prime
    return 1;

  int flag = 1; // 1 = true
  for (int i = 2; i < num; i++) // if it is divisible by another number
  {
    if (num%i == 0) {
      flag = 0;
      break;
    }
  }

  return flag;
}
