#include <stdio.h>

int NumberCompare(int, int); // Show that this function will be defined after main function

// int main(void)
// {
//   printf("%d is bigger number when you compare 3 and 4\n", NumberCompare(3,4));
//   printf("%d is bigger number when you compare 7 and 2\n", NumberCompare(7,2));
//   return 0;
// }

int NumberCompare(int a, int b)
{
  if (a>b)
    return a;
  else if (a<b)
    return b;
  else
    return 0;
}

/* Task: receive 3 integers and return the smallest */
int Max(int a, int b, int c)
{
  if (a>b)
  {
    return (a>c)? a : c;
  }
  else
  {
    return (b>c)? b : c;
  }
}

int Min(int a, int b, int c)
{
  if (a<b)
  {
    return (a<c)? a : c;
  }
  else
  {
    return (b<c)? b : c;
  }
}

// int main(void)
// {
//   int a,b,c;
//   printf("Type three integers: ");
//   scanf("%d %d %d", &a, &b, &c);
//   int min = Min(a,b,c);
//   int max = Max(a,b,c);
//   printf("Maximum is %d\nMinimum is %d\n", max, min);
//
// }

/* Task: Change F to C or C to F */
double CtoF(double c)
{
  return 1.8*c+32;
}

double FtoC(double f)
{
  return (f-32)/1.8;
}

int main(void)
{
  char answer;
  do {
    printf("Will you change C to F? y/n\n");
    scanf("%c", &answer); // store answer
    fflush(stdin); // WE MUST FLUSH scanf SO IT DOESN"T READ WRONG VALUE

    switch (answer) {
      case 'Y':
      case 'y': // if y
        printf("What is temperature in Celsius?\n");
        double c,f;
        scanf("%lf", &c);
        fflush(stdin);
        f = CtoF(c);
        printf("Current temperature in F is %f\n", f);
        break;

      case 'N': case 'n':
        printf("Do you want to change F to C then? y/n\n");
        scanf("%c", &answer);
        fflush(stdin);

        if (answer == 'y') {
          double c,f;
          printf("What is temperature in F?\n");
          scanf("%lf", &f);
          fflush(stdin);
          c = FtoC(f);
          printf("Current temperature in C is %f\n", c);

        } else if (answer == 'n') {
          printf("Okay.");
          return 0;

        } else {
          printf("WOW please type y or n\n");
        }

        break;

      default:
        printf("please type y or n\n");

    }

  } while(answer != 'y');


}
