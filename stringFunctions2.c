#include <stdio.h>
#include <stdlib.h>

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
// IMPORTANT
// IMPORTANT
void trimWhiteSpace(char *s) {
  char* d = s;
    do {
        while ((*d==' ') || (*d == '\t') || (*d=='\n')){
            d++;
        }
    } while (*s++ = *d++);
}
*/



int main() {
  char s[1000] = "Hello lo  rd";
  blankX(s, 'l');
  printf("%s\n", s);
  trimWhiteSpace(s);
  printf("%s", s);
}
