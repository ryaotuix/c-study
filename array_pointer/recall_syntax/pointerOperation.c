#include <stdio.h>

/*
int main(void)
{
  int * ptr1 = 0x0010;
  double * ptr2 = 0x0010;

  printf("%p %p\n", ptr1+1, ptr2+1); // increases 4 and 8

  printf("%p %p\n", ptr1, ptr2);
  ptr1++;
  ptr2++;
  // int pointer increases n*sizeof(int) ...

  printf("%p %p\n", ptr1, ptr2);
}
 This  allows */


int main(void)
{
  int arr[3] = {11, 22, 33};
  int * ptr = arr; // same as int * ptr = &arr[0];
  printf("%d %d %d\n", *ptr, *(ptr+1), *(ptr+2)); // Cause addition and subtraction of pointer goes up as the size of dataType

  printf("%d ", *ptr); ptr++;
  printf("%d ", *ptr); ptr++;
  printf("%d ", *ptr); ptr--;
  printf("%d ", *ptr); ptr--;
  printf("%d ", *ptr);

}

// THEREFORE: !!! arr[i] == *(arr+i)
