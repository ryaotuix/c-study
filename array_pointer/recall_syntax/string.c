#include <stdio.h>

/* for string (char array), there is \0 at the end so the length (+1) */
int main(void)
{
  char null = '\0'; // How you save null character (ASCII = 0)
  char emp = ' '; // HOw you save empty character (ASCII = 32)

  char str[] = "Good morning!";
  printf("Size of str[] = %d\n", sizeof(str));
  printf("Print null char = %c\n", str[13]); // null has no char
  printf("Print null int = %d\n", str[13]); // null ASCII = 0

  str[12] = '?'; // YOu can change string
  printf("Print string : %s\n", str);
  return 0;
}

// char arr1[] = {'H', 'i'} IS NOT string
// char arr2[] = {'H', 'i', '\0'} IS STRING

// int main(void)
// {
//   char str[50] = "I like C programming";
//   printf("string: %s\n", str);
//
//   str[8] = '\0';
//   printf("string: %s\n", str);
//
//   str[6] = '\0';
//   printf("string: %s\n", str);
//
//   str[2] = '\0';
//   printf("string: %s\n", str);
//   return 0;
// }
