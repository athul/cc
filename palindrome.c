
#include <stdio.h>
void main()
{
int a,d,rev=0,copy;
printf("enter a number:");
scanf("%d",&a);
copy=a;
while(a>0)
{
d=a%10;
rev=(rev*10)+d;
a=a/10;
}
if(copy==rev)
printf(" %d is a Palindrome\n",copy);
else
printf("Not a Palindrome...\n");
}



