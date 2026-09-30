#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,count=0;
clrscr();
printf("enter a number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
count++;
}
}
else if(count==2)
{
printf("%d is a prime number\n",n);
}
else
{
printf("%d is not a prime number",n);
}
getch();
return 0;
sss}