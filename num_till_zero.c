#include <stdio.h>
void main()
{
int a,s;
s=0;
do
{
printf("enter the numbers:\t");
scanf("%d",&a);
s=s+a;
}while(a!=0);
printf("sum=%d\n",s);
}
