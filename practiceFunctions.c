#include <stdio.h>
#include <stdlib.h>

// int *findSum(int *sorted_array,int n,  int m) {
//   int i;
//   int j;
//   int res[2] = {-1,-1};
//   for (i=0; i<n-1; i++) {
//     for (j=1; j<n; j++) {
//       if (sorted_array[i] + sorted_array[j] == m) {
//         res[0] = i;
//         res[1] = j;
//         return res;
//       }
//     }
//   }
//   return res;
// }



int gcd(int num1, int num2) {
  int smaller;
  if (num1<num2) {
    smaller = num1;
  } else {
    smaller = num2;
  }

  for (smaller; smaller >=1; smaller--){
    if ( (num1%smaller==0) && (num2%smaller==0) )
      return smaller;
  }
  return 1;
}

int isIn(int a, int *arr, int len) {
  int flag = 0;
  for (int i=0; i<len; i++) {
    if (arr[i]==a) {
      flag = 1; // if it is in
    }
  }
  return flag;
}


int *commonValues(int *A, int *B, int lenA, int lenB, int *N) {
  int i;
  int flag = 0;
  int j = 0;
  for (i=0; i<lenB; i++) {
    int inA  =isIn(B[i], A, lenA);
    if (inA == 1) {
      N[j] = B[i];
      flag =1;
      j++;
    }
  }
  if(flag==0){
    printf("No common\n");
    exit(1);
  }
  return N;
}

// int minDiff(int *A, int *B, int lenA, int lenB) {
//
// }


int main(){
  // int arr[6] = {1,2,3,4,5,6};
  // int res[2] = *findSum(arr, 6, 3);
  // for (int i=0; i<2; i++) {
  //   printf("%d, ", res[i]);
  // }
  int A[5] = {1,2,3,4,5};
  int B[6] = {6,7,8,9,10,11};
  int lenA = 5;
  int lenB = 6;
  int * N = (int*)malloc(sizeof(int)*lenB);

  int * res = commonValues(A, B, lenA, lenB, N);
  int lenN = sizeof(N)/sizeof(int);
  for (int i=0; i<lenN; i++){
    printf("%d, ", N[i]);
  }

  int num1 = 2;
  int num2 = 3;
  printf("%d\n", gcd(num1, num2));
}
