#include <stdio.h>

void ShowAllElements(const int * arr, int len) // const so that we don't change the array even by mistake
{
  for(int i=0; i<len; i++){
    printf("%d ", arr[i]);
  }
}


// There's wrong thing in this function
void ShowData(const int * ptr)
{
  int * rptr = ptr; // Now we can change variable that ptr indicates with rptr (const in parameter is useless)
  printf("%d \n", *rptr);
  *rptr = 20; // This works but then why const?
}



int main(void)
{
  int arr[3] = {1,2,3};
  int len = sizeof(arr) / sizeof(int);
  ShowAllElements(arr, len);
}
