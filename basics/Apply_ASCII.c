#include <stdio.h>
/* Task1: receive two points (x,y) so tht calculate area of rectangle) */
// int main(void){
//   int x1, y1;
//   int x2, y2;
//   printf("What is first the location of the first point?\n");
//   scanf("%d %d", &x1, &y1);
//   printf("What is first the location of the second point?\n");
//   scanf("%d %d", &x2, &y2);
//   int length = x1 - x2, width = y1 - y2;
//   int area = length * width;
//   printf("Area : %d", area);
// }

/* Task2: convert inteer to ASCII code */
int main(void){
  printf("Type integer from 0 to 127\n");
  int a;
  scanf("%d", &a);
  printf("in ASCII %d is %c\n", a, a);
  printf("WARNING \a");
}
