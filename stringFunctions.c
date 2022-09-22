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


/*
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
*/


/*
void toLowerStr(char *s) {
  for (int i=0; s[i] != '\0'; i++) {
    if ((s[i]>'A') && (s[i]<'Z')) {
      s[i] = s[i] + 32;
    }
  }
}

void toUpperStr(char *s) {
  for (int i=0; s[i] != '\0'; i++) {
    if ((s[i]>'a') && (s[i]<'z')) {
      s[i] = s[i] - 32;
    }
  }
}

void reverseStr(char *s) {

  int len =  0;
  while (s[len] != '\0') {
    len++;
  }
  len--;

  for (int i=0; i<=len/2; i++) {
    char temp = s[len-i]; // save back letter in temp
    s[len-i] = s[i]; // back letter becomes the front one
    s[i] = temp; // front letter becomes the back one
  }
}

#define ASCII_SIZE 256

char strfreq(const char *s) {
  int count[ASCII_SIZE] = {0}; // initailize array size of 256 and fill with 0s

  char max = s[0];
  int maxCount = 0;


  // add all counts
  for (int i=0; s[i] != '\0'; i++) {
    count[(int)s[i]]++;
    if (count[(int)s[i]] > maxCount) {
      max = (char)s[i];
      maxCount = count[(int)max];
    } else if(count[(int)s[i]] == maxCount) {
      max = (max < s[i]) ? (char)max : (char)s[i];
      maxCount = count[(int)max];
    }
    printf("%c\n", max);
  }

  return max;
}



int main() {


  char s[1000];
  strcpy(s, "SexY mE!");
  printf("%s\n", s);
  toLowerStr(s);
  printf("%s\n", s);
  toUpperStr(s);
  printf("%s\n", s);
  reverseStr(s);
  printf("%s\n", s);


  const char s[1000] ="ayaayyy";
  char c = strfreq(s);
  printf("\n\n%c\n", c);
}
*/







char res[1000];

int isIn (const char* s, int len, const char c) {
  int flag = 0; // False
  for (int i=0; i<len; i++) {
    if (s[i]==c) {
      flag = 1;
      break;
    }
  }
  return flag;
}

char *delChars(const char *s1, const char *s2) {
  int len2 = 0;
  for (int i=0; s2[i] != '\0'; i++) {
    len2++;
  }

  int i = 0;
  int ind = 0;
  while(s1[i] != '\0') {
    if (isIn(s2, len2, s1[i])==0) {
      res[ind++] = s1[i];
    }
    i++;
  }
  res[ind] = '\0';

  return res;
}


int main() {
  printf("%s\n", delChars("Hello World", "Said George"));  // returns "HllWl"
}
