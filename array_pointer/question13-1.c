#include <stdio.h>

/* Task 1: use pointer to add 2 in each element in array
int main(void)
{
  int arr[5] = {1,2,3,4,5};
  int * ptr = arr; //same as int * ptr = &arr[0];
  int len = sizeof(arr) / sizeof(int);

  for(int i=0; i<len; i++){
    *ptr += 2;
    printf("%d value is %d\n",i+1, *ptr);
    ptr++;
  }
}
*/

/* Task2: Do Task 1 but do not increase ptr value itself
int main(void)
{
  int arr[5] = {1,2,3,4,5};
  int * ptr = arr; //same as int * ptr = &arr[0];
  int len = sizeof(arr) / sizeof(int);

  for(int i=0; i<len; i++){
    printf("%d value is %d\n",i+1, *(ptr+i));
    (*(ptr+i)) += 2;
  }

  printf("\n");

  for(int i=0; i<len; i++){
    printf("%d value is %d\n",i+1, arr[i]);
  }
}
*/

/* Task 3: set an int array and make pointer that directs to the last value of ARRAY
reduce down the pointer value and get the sum of all element
int main(void)
{
  int arr[5] = {1,2,3,4,5};
  int len = sizeof(arr) / sizeof(int);

  int * ptr = &arr[len-1];
  int sum = 0;

  for(int i=0; i<len; i++){
    sum += *(ptr--);
    printf("current sum is %d\n", sum);
  }
}
*/

/* Task 4:
