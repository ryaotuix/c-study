#include <stdio.h>
#include <stdlib.h>

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

}
