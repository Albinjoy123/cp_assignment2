#include<stdio.h>
voidmain()
{
int i,j;
int space=0;
for(i=1;i<=5;i++)
{
for(j=5;j>=space;j--)
{
printf("%d",j);
}
for(j=1;j<=i;j++)
{
printf("%d",j);
}
for(j=i-1;j>1;j--)
{
printf("%d",j);
}
printf("\n");
}
}
