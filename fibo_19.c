#include <stdio.h>
void main()
{
int a,b,c,n;
a=0;
b=1;
printf("enter the limit:");
scanf("%d",&n);
if(n==1)
{
printf("fib series=%d",a);
}
else if(n==2)
{
printf("fib series is=%d%d",a,b);
}
else
{
printf("%d\t%d\t",a,b);
while((n-2)>0)
{
c=a+b;
printf("%d\t",c);
a=b;
b=c;
n=n-1;
}
}
}
