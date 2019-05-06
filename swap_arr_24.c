#include<stdio.h>
void main()
{
int i,temp,a[100],n,m;
printf("enter the limit:");
scanf("%d",&n);
printf("enter the numbers in array:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
m=n;
if(n%2!=0)
m=n-1;
for(i=0;i<m;i++)
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
i++;
}
printf("array after swapping:\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}

