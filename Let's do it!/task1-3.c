/* Calculate LeastCommonMultiple and GreatestCommonDivisor */
#include <stdio.h>

int GCD(int a, int b);

int LCM(int a, int b)
{
  return a*b/(GCD(a,b));
}

int GCD(int a, int b) // THIS IS GENIUS
{
    int r = a % b;
    if (r == 0) {
      return b;
    }
    return GCD(b, r);
}
/*
int GCD(int a, int b)
{
  int gcd;
  if (a > b)
  {
    int q = a/b;
    int r = a%b;

    if (r == 0) // if it is divisible, then b
      return b;

    return simpleGCD(b,r); // else, Use Euclidean algorithm
    // When a>b, a = b*q + r; GCD of 'a' and 'b' = GCD of 'b' and 'r'
  }

  else if (a == b)
    return a;

  else
  {
    return GCD(b,a);
  }

}


int simpleGCD(int a, int b) // initialize later
{
  if (a<=b)
  {
    for(int i = a; i >= 1; i--) // (a<b) so the GCD can be a, a-1, a-2, ..., 1
    {
      int aRemain = a%i;
      int bRemain = b%i;
      if (aRemain == 0 && bRemain == 0) // if i can divide both a and b,
        return i; // i is GCD
    }
  }
  else
    simpleGCD(b,a);
}
*/

int main(void)
{
  int a, b;

  printf("Type two integers: ");
  scanf("%d %d", &a, &b);

  int gcd = GCD(a, b);
  printf("GCD : %d\n", gcd);
  int lcm = LCM(a, b);
  printf("LCM : %d", lcm);
}
