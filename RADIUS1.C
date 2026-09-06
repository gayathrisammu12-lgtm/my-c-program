#include<stdio.h>
#include<conio.h>
int main()
{
float r,area,circumference;
printf("enter radius of a circle:");
scanf("%f",&r);
area=3.14*r*r;
circumference=2*3.14*r;
printf("area of a circle=%f\n",area);
printf("circumference=%f",circumference);
getch();
return 0;
}