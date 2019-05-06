#include <stdio.h>
void main()
{
int a,b,c,d,e,avg;
printf("Enter all the marks out of 100\n");
printf("enter number of marks in sub1:");
scanf("%d",&a);
printf("enter number of marks in sub2:");
scanf("%d",&b);
printf("enter number of marks in sub3:");
scanf("%d",&c);
printf("enter number of marks in sub4:");
scanf("%d",&d);
printf("enter number of marks in sub5:");
scanf("%d",&e);
avg=(a+b+c+d+e)/5;
printf("Average marks are %d\n",avg);
if (avg>=80)
printf("honours\n");
else if (avg>=60)
printf("first division\n");
else if (avg>=50)
printf("second division\n");
else if(avg>=40)
printf("third division\n");
else if(avg<=39)
printf("failed\n");
}
