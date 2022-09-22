#include <stdio.h>
#include <stdlib.h>

/*
int mystrcmp(const char *s1, const char *s2) {
  int i = 0;
  while ((s1[i] != '\0') && (s2[i] != '\0')) {
    if (s1[i] < s2[i]) {
      return -1;
    } else if (s1[i] > s2[i]) {
      return 1;
    }
    i++;
  }
  if (s1[i] < s2[i]) {
    return -1;
  } else if (s1[i] > s2[i]) {
    return 1;
  }
  return 0;
}

int main() {
  char *s1 = "This is what";
  char *s2 = "What is this";

  char *s3 = "Hello";
  char *s4 = "Hello!";

  int res = mystrcmp(s1, s2);
  int res2 = mystrcmp(s3, s4);

  printf("%d\n", res); // expected -1
  printf("%d\n", res2); // expected -1
*/

/*
int mystrchr(const char *s, int c) {
  int i = 0;
  while (s[i] != '\0') {
    if ((char)c == s[i]) {
      return i;
    }
    i++;
  }
  // check for the case where c is '\0'
  if ((char)c == s[i]) {
    return i;
  }

  return -1;
}

int main() {
  const char *s = "hello!";
  char cs = '\0';
  int c = (int)cs;
  printf("%d\n", mystrchr(s, c));
}
*/



/*
char  *mystrcpy(char *dest, const char *src) {
  int i = 0;
  while (src[i] != '\0') {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return dest;
}

int main() {
  const char *src = "hello!";
  char *dest = (char*)malloc(sizeof(char)*1000);
  dest = mystrcpy(dest, src);
  printf("%s", dest);
}
*/


/*
int mystrlen(const char *s) {
  int i = 0;
  while (s[i] != '\0') {
    i++;
  }
  return i;
}

int main() {
  const char*s = "hello";
  int len = mystrlen(s);
  printf("%d", len);
}
*/

/*
int mystrncmp(const char *s1, const char *s2, int n) {
  int i = 0;
  while(1) {
    if ((s1[i] == '\0') && (s2[i] == '\0')) {
      return 0;
    } else if (s1[i] == s2[i]) {
      i++;
    } else {
      break;
    }
  }
  int res = (s1[i] > s2[i]) ? 1 : -1;
  return res;
}

int main() {
  const char *s1 = "wowww";
  const char *s2 = "woww";
  int a = mystrncmp();
  printf("%d", a);
}
*/

int mystrrchr(const char *s, int c) {
  int index = -1;
  int len = sizeof(s)/sizeof(char);
  for (int i = len; i>-1; i--) {
    if (s[i] == (char)c) {
      return i;
    }
  }
  return index;
}

int main() {
  const char *s = "this is me";
  char c = '!';
  int index = mystrrchr(s, (int)c);
  printf("%d",index);
}
