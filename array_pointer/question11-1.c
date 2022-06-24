#include <stdio.h>

/* make array len 5. Receive 5 integers. Return min, max, sum */

// int main(void)
// {
//   int arr[5];
//
//   for(int i=0; i<5; i++){
//     printf("What is your %d numer?", i+1);
//     scanf("%d", &arr[i]);
//
//   }
//
//   int ar1len = sizeof(arr) / sizeof(int); // this is size of arr
//   int min = arr[0], max = arr[0], sum = 0;
//
//   for(int i=0; i<ar1len; i++){
//     min = (min>arr[i])? arr[i] : min;
//     max = (max<arr[i])? arr[i] : max;
//     sum += arr[i];
//   }
//
//   printf("Min is %d. Max is %d. Sum is %d", min, max, sum);
//
// }


/* save "Good time" in an char array */

int main(void)
{
  char arr[] = {'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e'};
  int arlen = sizeof(arr) / sizeof(char); // lenght of array
  for (int i = 0; i < arlen; i++){
    printf("%c", arr[i]);
  }
}
