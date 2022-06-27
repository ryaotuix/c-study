#include <stdio.h>

/*
int main(void)
{
  int arr1[3] = {1,2,3};
  double arr2[3] = {1.1, 2.2, 3.3};

  printf("%d and %g\n", *arr1, *arr2); // *operation means that (Variable in that address which means Variable in arr1 and arr2 as array name is a pointer (address))
  *arr1 += 100;
  *arr2 += 120.5;
  printf("%d and %g\n", arr1[0], arr2[0]);  // same as printf("%d and %g\n", *arr1, *arr2);
}
*/

int main(void)
{
  int arr[3] = {15, 25, 35};
  int * ptr = &arr[0]; // same as ptr = arr

  printf("%d %d\n", arr[0], ptr[0]);
  printf("%d %d\n", arr[1], ptr[1]);
  printf("%d %d\n", arr[2], ptr[2]);
}
