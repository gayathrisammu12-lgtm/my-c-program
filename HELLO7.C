#include<stdio.h>
#include<conio.h>
int main()
{
int a=10;
int b=20;
int temp;
temp=a;
a=b;
b=temp;
printf("%d" ,a);
printf("%d" ,b);
getch();
return 0;
}