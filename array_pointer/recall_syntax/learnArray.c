#include <stdio.h>

// int main(void)
// {
//   int arr[5];
//   int sum = 0;
//
//   arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;
//
//   for(int i=0; i<5; i++) {
//     sum += arr[i];
//     printf("%d number is %d\n", i+1, arr[i]);
//   }
//
//
//   printf("All sum is %d", sum);
//   return 0;
//
// }

/* Learn HOW TO INITIALIZE ARRAY */
int main(void)
{
  int arr[5] = {1, 2, 3, 4, 5}; // Method 1

  int arr2[] = {1, 2, 3, 4, 5, 6, 7}; // Method 2 (automatically len = 7)

  int arr3[5] = {1,2}; // Method 3 (rest are filled with 0)

  int ar1len = sizeof(arr) / sizeof(int); // size of arr1 = 5*4 since sizeof(int)=4
  int ar2len = sizeof(arr2) / sizeof(int); // This is how you get len(array)
  int ar3len = sizeof(arr3) / sizeof(int);

  for (int i=0; i<ar1len; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");

  for (int i=0; i<ar2len; i++){
    printf("%d ", arr2[i]);
  }
  printf("\n");

  for (int i=0; i<ar3len; i++){
    printf("%d ", arr3[i]);
  }
  printf("\n");
  return 0;


}
