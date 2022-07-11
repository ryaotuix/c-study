/* Bubble Sort in Descending order*/

#include <stdio.h>

void printArray(int * ints, int len)
{
  for (int i=0; i<len; i++){
    printf("%d ", ints[i]);
  }
  printf("\n");
}

void BubbleDescending(int * ints, int len)
{
  int temp;
  for(int i=0; i<len-1; i++){

    for(int j=len-1; j>0+i; j--){ // because the smallest number always goes to the left

      if(ints[j]<ints[j-1]){
        temp = ints[j];
        ints[j] = ints[j-1];
        ints[j-1] = temp;
      }

    }

  }
}

int main(void){
  int arr[7] = {};
  int len = sizeof(arr) / sizeof(int);
  for (int i=0; i<len; i++) {
    int input;
    printf("Enter int: ");
    scanf("%d", &input);
    arr[i] = input;
  }

  printArray(arr, len); // Check input ARRAY
  BubbleDescending(arr, len);

  printArray(arr, len);

}
