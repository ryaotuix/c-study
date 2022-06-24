#include <stdio.h>

// int main(void)
// {
//   char str[50];
//
//   printf("type a string: ");
//   scanf("%s", str); // Don't use &
//   printf("String is : %s\n", str);
//   return 0;
// }

/* Task: print user inputted string length */

// int main(void)
// {
//   char str[15];
//
//   printf("type a string: ");
//   scanf("%s", str);
//
//   int strlen = 0, index = 0;
//   while (str[index] != '\0'){
//     strlen++, index++;
//   }
//
//   printf("lengh : %d", strlen);
//   return 0;
// }


/* receive a word and save in char array. Then reverse order the array */
// int main(void)
// {
//   char arr[100];
//   printf("Type a word: ");
//   scanf("%s", arr);
//
//   //ex) "HELLO\0"
//   int arrlen = 0, i = 0;
//   while(arr[i] != '\0'){
//     arrlen++, i++;
//   }
//   // arrlen = 5, i = 5
//
//   for (int j=0; j < (arrlen)/2; j++){
//     char first = arr[j], last = arr[arrlen-(j+1)];
//     arr[j] = last, arr[arrlen-(j+1)] = first;
//   }
//   printf("array is %s", arr);
// }

/* receive a word and print the biggest ASCII letter */
int main(void)
{
  char str[100];
  printf("type a word: ");
  scanf("%s", str);

  int len = 0;
  while(str[len] != '\0'){
    len++;
  }

  int index = 0;
  int big = str[index];

  for(int i = 1; i < len; i++){
    if (str[i] > big){
      index = i;
      big = str[index];
    }
  }

  printf("Biggest ASCII letter : %c", str[index]);
  return 0;
}
