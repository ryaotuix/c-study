/* receive a number and chnage it to binary */
#include <stdio.h>


void ReverseArray(int * arr, int len, int flag)
{
  for(int i=0; i<len/2; i++){
    int front = arr[i];
    int end = *(arr + len -1 -i); // arr[len-1-i]
    int temp = front;

    arr[i] = end;
    arr[len-1-i] = temp;
  }

  if (flag == 1)
  {
    printf("it is negative\n");
  }

  for(int i=0; i<len; i++){
    printf("%d",arr[i]);
  }
}


void ToBinary (int i) {
  int binary[31] = {};
  int len = sizeof(binary) / sizeof(int);

  int flag = 0, index = 0;
  if (i<0) {
    flag = 1; // if negative integer we need to do something more
    i *= -1;
  }

  // ALGORITHM
  while (i>0){
    binary[index] = i%2; // remainder
    index++;
    i /= 2;
  }
  // THIS STORES REVERSE

  ReverseArray(binary, len, flag);
}

// In Recursive Algorithm
void BinaryRecursion(int i)
{
  int rem = i%2;
  i /= 2;

  if (i>0)
    BinaryRecursion(i);

  printf("%d", rem);
}


int main(void)
{
  // 37 becomes 100101 36 becomes 100100
  int i;
  printf("Type a positive integer: ");
  scanf("%d", &i);

  int flag = 0;
  BinaryRecursion(i);
  // ToBinary(i);
}

/* First algorithm: subtract 1, 2, 4, 8 .. and store 1 or 0 in the string
then swithc the order */

/* Second algorithm: */
