#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void sortArray(int *numbers, unsigned int n, unsigned int descendFlag) {
  for (int i=0; i<n-1; i++) {
    for (int j=0; j<n-i-1; j++) {


      if (descendFlag == 1) { // ascending
        if (numbers[j]>numbers[j+1]) {
          swap(&numbers[j], &numbers[j+1]);
        }
      } else { // descending
        if (numbers[j]<numbers[j+1]) {
          swap(&numbers[j], &numbers[j+1]);
        }
      }


    }
  }
}

int main() {
  int arr[] = {1,4,2,8,1,13,7};
  int len = sizeof(arr)/sizeof(int);
  sortArray(arr, len, 0);

  for (int i=0; i<len; i++) {
    printf("%d, ", arr[i]);
  }
}
