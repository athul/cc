#include<stdio.h>
#include<math.h>
void main(){
int a,b,c,d,x;
float r1,r2;
printf("Enter the coefficients of x^2:\n");
scanf("%d",&a);
printf("Enter the coefficients of x:\n");
scanf("%d",&b);
printf("Enter the constant Term:\n");
scanf("%d",&c);
d=((b*b)-(4*a*c));
if(d==0){
x=-b/(2*a);
printf("The Roots are %d and %d",x,x);
}
else if(d>0){
r1=((-b+sqrt(d))/2*a);
r2=((-b-sqrt(d))/2*a);
printf("The roots are %f and %f",r1,r2);
}
else{
printf("The roots are complex");
}
}

