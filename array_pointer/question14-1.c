#include <stdio.h>

// Call-by-Value function
int SquareByValue(int i){
  return i*i;
}

void squareByReference(int * i){
  int num = *i; // number is same as i
  *i = num*num; // the value of i becomes i*i
}

int main(void){
  int i = 10;
  int iSquared = SquareByValue(i);
  printf("%d\n", iSquared);

  squareByReference(&i);
  printf("%d\n", i);
}
