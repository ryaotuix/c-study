#include <stdio.h>

// Call-by-Value function
int SquareByValue(int i){
  return i*i;
}

// Call-by-Reference function
void squareByReference(int * i){
  int num = *i; // number is same as i
  *i = num*num; // the value of i becomes i*i
}


void Swap3(int * num1, int * num2, int * num3){
  int temp1 = *num1, temp2 = *num2; // save original num1 and num2
  *num1 = temp2;
  *num2 = *num3;
  *num3 = temp1;

}

int main(void){
  // Task 1: use call by functions
  int i = 10;
  int iSquared = SquareByValue(i);
  printf("%d\n", iSquared);

  squareByReference(&i);
  printf("%d\n", i);


  // Task2: change num1 to num2, num2 to num3, num3 to num1
  int num1 = 1, num2 = 2, num3 = 3;
  printf("%d %d %d\n", num1, num2, num3);
  Swap3(&num1, &num2, &num3);
  printf("%d %d %d\n", num1, num2, num3);


}
