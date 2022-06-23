/* You have 3500 원 how many ways can you purchase stuffs at least one for each */
#include <stdio.h>

int main(void)
{
  int money;
  int flag = 0;

  int p_cream = 500;
  int p_chips = 700;
  int p_coke = 400;

  printf("How much money do you have currently?: ");
  scanf("%d", &money);

  for (int i = 1; i <= money/p_cream; i++) // i = num_icecream
  {
    for (int j = 1; j <= money/p_chips; j++)
    {
      for (int k = 1; k <= money/p_coke; k++)
      {
        int cost = i*p_cream + j*p_chips + k*p_coke;
        if (cost == money)
        {
          printf("creambbang : %d, chips : %d, coke : %d\n", i, j, k);
          flag++;
        }
      }
    }
  }
  if (flag == 0)
    printf("There's no way\n");

  return 0;
}
