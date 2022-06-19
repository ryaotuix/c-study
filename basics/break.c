#include <stdio.h>

/* Use continue and print 1~20 except for the multiples of 2 or 3 */

// int main(void)
// {
//   for(int i = 1; i <= 20; i++)
//   {
//     if (i%2 == 0 || i%3 == 0)
//     {
//       continue;
//     }
//     printf("%d\n", i);
//   }
//   return 0;
// }

/* Task: 2,4,6,8 단 print. 2단은 2*2 까지, 4단은 4*4까지 ... */
// int main(void)
// {
//   for(int dan = 2; dan<=9; dan++)
//   {
//     if (dan%2 != 0)
//       continue;
//
//     for(int i = 1; i<=9; i++)
//     {
//       int result = dan*i;
//       printf("%d times %d is %d\n", dan, i, result);
//
//       if(i==dan)
//         break;
//     }
//   }
// }

/* Task: get all A and Z
  A Z
+ Z A
= 9 9
*/

// int main(void)
// {
//   for (int A = 0; A <= 9; A++)
//   {
//     for (int Z = 0; Z <= 9; Z++)
//     {
//       int AZ = A*10 + Z;
//       int ZA = Z*10 + A;
//
//       if(AZ+ZA == 99)
//       {
//         printf("%3d %d\n", A, Z);
//         printf("+ %d %d\n", Z, A);
//         printf("%5d\n\n", 99);
//       }
//     }
//   }
// }
