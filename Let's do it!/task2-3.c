#include <stdio.h>

/* initiate int array length of 10, if received value is odd, start filling it from the beginning, if even, fill it from the end */

void FillArray (int * array, int len)
{
  int oddi = 0; int eveni = len-1;

  for(int i=0; i<len; i++){
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    fflush(stdin);

    switch(n%2){
      case 0: // if even
        array[eveni] = n;
        eveni--;
        break;
      case 1: // if odd
        array[oddi] = n;
        oddi++;
        break;
    }
  }

  for(int i=0; i<len; i++){
    printf("%d ", array[i]);
  }
}

int main(void)
{
  int arr[10] = {};
  int len = sizeof(arr) / sizeof(int);
  FillArray(arr, len);
}
