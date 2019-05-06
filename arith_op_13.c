#include<stdio.h>
void main(){
int a,b,ch,sum=0,diff,mul,quo;
printf("Enter two numbers:/n");
scanf("%d",&a);
scanf("%d",&b);
sum=a+b;
diff=a-b;
mul=a*b;
quo=a/b;
printf("The sum is %d\n",sum);
printf("The difference is %d\n",diff);
printf("The product is %d\n",mul);
printf("The quotient is %d\n",quo);
}
