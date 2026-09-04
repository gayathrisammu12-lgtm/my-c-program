#include<stdio.h>
#include<conio.h>
int main()
{
int week;
clrscr();
printf("enter the number(1-7):");
scanf("%d",&week);
switch(week)
{
case 1:
printf("monday:1\n");
case 2:
printf("tuesday:2\n");
case 3:
printf("wednesday:3\n");
case 4:
printf("thursday:4\n");
case 5:
printf("friday:5\n");
case 6:
printf("saturaday:6\n");
case 7:
printf("sunday:7\n");
break;
default:
printf("invalid week\n");
}
getch();
return 0;
}
