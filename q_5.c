
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define CONTINUE 1
#define WON 2
#define LOST 3
int main()
{
int bankBalance=1000, betAmount;
int myPoint;
int gameStatus;
int sum, dice1, dice2;
do
{ 
  printf("Aw cmon, take a chance!\n") ;
  printf("Enter the bet amount") ;
  scanf("%d", &betAmount) ;
} 
while(betAmount>=bankbalance);

srand(time(NULL));
// Create 2 random numbers dice1 and dice2 between 1 and 6
dice1 = 1 + rand() % 6;
dice2 = 1 + rand() % 6;
// Add the result of two dice rolls
sum = dice1 + dice2;
printf("Player rolled %d + %d = %d\n", dice1, dice2, sum);
switch(sum)
{
case 7:
case 11:
gameStatus = WON;
break;
case 2:
case 3:
case 12:
gameStatus = LOST;
break;
default:
gameStatus = CONTINUE;
myPoint = sum;
printf("Point is %d\n", myPoint);
break;
}
while(CONTINUE == gameStatus)
{
dice1 = 1 + rand() % 6;
dice2 = 1 + rand() % 6;
sum = dice1 + dice2;
printf("Player rolled %d + %d = %d\n", dice1, dice2, sum);
if(sum == myPoint)
   {
   gameStatus = WON;
   
   }
else
{
if(7 == sum)
{
gameStatus = LOST;
}
}
}
if(WON == gameStatus)
{
bankBalance=betAmount+bankBalance; printf("You Win\n") ;
printf("Bank Balance=%d", bankBalance) ;
}
else
{
printf("You Loose\n");
bankBalance=bankBalance-betAmount;
printf("Bank Balance=%d\n", bankBalance) ;
If(bankBalance==0)
printf("Sorry you Busted!") ;
}
return 0;
}
