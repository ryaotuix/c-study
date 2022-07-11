/*create array length of 10 and receive elements from user. Then print odd numbers first and then evens*/

#include <stdio.h>

void PrintOdd(const int * arr, int len)
{
  printf("Odd elemets are: ");

  for(int i=0; i<len; i++){
    if (arr[i]%2 == 1)
      printf("%d ", arr[i]);

    if (*(arr+i)%2 == 1)
      printf("%d ", arr[i]);
  }
}

void PrintEven(const int * arr, int len)
{
  printf("Even elemets are: ");

  for(int i=0; i<len; i++){
    if (arr[i]%2 == 0)
      printf("%d ", arr[i]);
  }
}

int main(void)
{
  int intarray[10] = {};
  for (int i=0; i<10; i++){
    int input;
    printf("Enter an int: ");
    scanf("%d", &input);
    intarray[i] = input;
  }
  int len = sizeof(intarray) / sizeof(int);
  PrintOdd(intarray, len);
  PrintEven(intarray, len);
  return 0;
}
