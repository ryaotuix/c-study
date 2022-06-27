#include <stdio.h>

void ShowArrayElem(int * param, int len)
{
  for(int i=0; i<len; i++){
    printf("%d ", param[i]);
  }
  printf("\n");
}

void AddArrayElem(int * param, int len, int add)
{
  for(int i=0; i<len; i++){
    param[i] += add; // same as *(param+i) += add;
    *(param+i) += add;
  }
}

int main(void)
{
  int arr1[] = {1, 2, 3};
  int arr2[] = {4, 5, 6, 7};
  int ar1len = sizeof(arr1) / sizeof(int);
  int ar2len = sizeof(arr2) / sizeof(int);

  ShowArrayElem(arr1, ar1len);
  ShowArrayElem(&arr2[0], ar2len);

  printf("What integer do you want to add: ");
  int add;
  scanf("%d", &add);

  AddArrayElem(arr1, ar1len, add);
  AddArrayElem(arr2, ar2len, add);
  ShowArrayElem(arr1, ar1len);
  ShowArrayElem(&arr2[0], ar2len);

}
