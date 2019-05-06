#include<stdio.h>
void main()
{
int a,d,s=0,copy;
printf("enter a number:");
scanf("%d",&a);
copy=a;
while(a>0)
{
d=a%10;
s=s+(d*d*d);
a=a/10;
}
if(copy==s)
{
printf("The number is in armstrong");
}
else
{
printf("The number is not in armstrong");
}
}
