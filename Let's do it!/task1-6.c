/* Receive seconds and change it to hour min second */
#include <stdio.h>

int main(void){
  int sec;
  printf("Type second : ");
  scanf("%d", &sec);

  int time = sec / 3600;
  int min = (sec - 3600*time)/60;
  int seconds = sec - 3600*time - 60*min;

  printf("%d second is : %d hours %d min %d second", sec, time, min, seconds);
}
