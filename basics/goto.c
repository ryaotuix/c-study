#include <stdio.h>

/* Learn GOTO function */
int main(void)
{
  int num;
  printf("Type an integer :");
  scanf("%d", &num);

  if (num%2 == 0){
    goto EVEN;
  } else if (num%2 == 1){
    goto ODD;
  } else {
    goto OTHER;
  }

  EVEN:
    printf("%d is an even integer\n", num);
    goto END;

  ODD:
    printf("%d is an odd integer\n", num);
    goto END;

  OTHER:
    printf("IDK\n");

  END:
    return 0;
}
