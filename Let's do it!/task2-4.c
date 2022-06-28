/* IS palindrome? */
#include <stdio.h>

int IsPalindrome(char * str, int len)
{
  int front = 0, end = len-1;
  for(int i=0; i<len/2; i++){
    // printf("%c and %c\n", str[front], str[end]); to check
    if(str[front] == *(str+end)){
      front++;
      end--;
    } else {
      return 0; // It is not a palindrome
    }
  }
  return 1; // It is a palindrome
}

int main(void)
{
  char * str = 0;
  // The following solves the problem that we cannot do scanf("%s", str); directly
  char string[100];
  printf("Type a word: ");
  scanf("%s", string);
  str = string;

  int len = 0;
  while(*(str+len) != '\0'){
    len++;
  }

  int pal = IsPalindrome(str, len);


  if (pal == 1)
    printf("It is a palindrome!\n");
  else
    printf("It is not a palindrome\n");
}
