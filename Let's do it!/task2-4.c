/* IS palindrome? */
#include <stdio.h>

int IsPalindrome(char * str, int len)
{
  int front = 0, end = len-1;
  for(int i=0; i<len; i++){
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
  printf("Type a word: ");
  scanf("%s", str);
  fflush(stdin);
  
  int len = sizeof(str) / sizeof(char);
  int pal = IsPalindrome(str, len);
  printf("%d", pal);

  if (pal == 1)
    printf("It is a palindrome!\n");
  else
    printf("It is not a palindrome\n");
}
