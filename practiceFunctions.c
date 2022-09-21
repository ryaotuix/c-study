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



int main(){
  // int arr[6] = {1,2,3,4,5,6};
  // int res[2] = *findSum(arr, 6, 3);
  // for (int i=0; i<2; i++) {
  //   printf("%d, ", res[i]);
  // }

  int num1 = 2;
  int num2 = 3;
  printf("%d\n", gcd(num1, num2));
}
