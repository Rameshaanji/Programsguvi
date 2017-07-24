#include<stdio.h>
int main()
{
int n;
printf("Enter a number:");
scanf("%d",&n);
if(n>0)
{
printf("\n Positive");
}
else if(n<0)
{
printf("\n Negative");
}
else
{
printf("\nZero");
}
return 0;
}
