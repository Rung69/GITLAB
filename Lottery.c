#include <stdio.h>
void main()
{
<<<<<<< HEAD
  int WinLotteryNo[10] = {1579, 1711, 5515, 7233, 5614, 8876, 1215, 4232, 9155, 9996}; 
  float WinAmount[10] = {50000, 15000, 10000, 5000, 5000, 5000, 5000, 3000, 3000, 3001};
=======
  int WinLotteryNo[10] = {1579, 1711, 5515, 7244, 5615, 8876, 1215, 4232, 9155, 9995}; 
  float WinAmount[10] = {50000, 15000, 10000, 5000, 5000, 5000, 5000, 3000, 3000, 3000};
>>>>>>> f4c475acefad76c12b7ba4dd13dc14452936026a
  int N = 10;
  int i, won; 
  
  int YourLotteryNo;  
   
  printf("Enter your Lottery Number (0 to end): "); 
  scanf("%d", &YourLotteryNo); 
  while (YourLotteryNo != 0) 
  { 
    won = 0; 
    for (i=0;i<N && !won; i++) 
    {
       if (YourLotteryNo == WinLotteryNo[i]) 
       {
          printf("Congratulations You Won %8.2f baht\n", WinAmount[i]); 
          won = 1;
       }
    }
    if (!won) 
      printf("Sorry Lottery Number %4d did not win\n", YourLotteryNo); 
    printf("Enter your Lottery Number (0 to end): "); 
    scanf("%d", &YourLotteryNo); 
  }
  printf("GOODBYE");
  scanf("%d", &i);
}
