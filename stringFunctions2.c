#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void blankX(char *s, const char toRemove) {
  int i =0;
  while (s[i] != '\0') {
    if (s[i] == toRemove) {
      s[i] = 'X';
    }
    i++;
  }
}

/*
void trimWhiteSpace(char *s) {
  char* d = s;
    do {
        while ((*d==' ') || (*d == '\t') || (*d=='\n')){
            d++;
        }
    } while (*s++ = *d++);
}




int main() {
  char s[1000] = "Hello lo  rd";
  blankX(s, 'l');
  printf("%s\n", s);
  trimWhiteSpace(s);
  printf("%s", s);
}
*/

/*
char arr[1000];
char *firstComplement(const char *s) {
  int i = 0;
  while(s[i] != '\0') {
    if (s[i] == '0') {
      arr[i] == '1';
    } else if (s[i]=='1') {
      arr[i] == '0';
    } else {
      return NULL;
    }
    i++;
  }
  arr[i] = '\0';
  return arr;
}
*/

unsigned int emptyLinesCounter(const char *s) {
  int flag = 0;
  int emptyLine = 0;
  int i = 0;

  if ((s[i] == '\n'))  {
    flag++;
    emptyLine++;
    i++;
  }

  while(s[i] != '\0') {
    if ((s[i] == '\n'))  { // if new line is found
      flag =2;
    } else if ((s[i] == '\t') && (s[i] == ' ')) { // any non new line white space
      flag = 1;
    } else { // if non-white space is found
      flag = 0;
    }

    if (flag==2) {
      emptyLine++;
    }
    i++;
  }

  if (s[i-1]=='\n')
    emptyLine--;

  return emptyLine;
}


int main() {
  // char s[1000] = "10001000";
  // arr = firstComplement(s);
  // printf("%s", arr); // expected ""

  char s[1000] = "\n\nhey\t\n  \n\thaha\n"; // expected 4
  printf("%s\n", s);
  printf("start\n");
  int emp = emptyLinesCounter(s);
  printf("%d\n", emp);
}
