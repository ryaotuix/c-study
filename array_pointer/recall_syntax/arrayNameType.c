#include <stdio.h>

int main(void)
{
  int arr[3] = {0,1,2};
  printf("name of array : %p\n", arr); // %p prints address
  printf("first element: %p\n", &arr[0]);
  printf("second element: %p\n", &arr[1]);
  printf("third element: %p\n", &arr[2]);
}

// NAME OF ARRAY IS A POINTER but cannot be changed <constant pointer>
