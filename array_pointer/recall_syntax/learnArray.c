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

}
