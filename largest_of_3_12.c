#include<stdio.h>
void main(){
int a,b,c;
printf("Enter three  numbers:\n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
(a>b)?((a>c)?printf ("%d",a):printf ("%d",c)):((b>c)?printf("%d",b):printf ("%d",c));
}
