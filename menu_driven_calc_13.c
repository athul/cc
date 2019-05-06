#include <stdio.h>
void main()
{
int a,b,x;
char ch;
printf(" +.addition\n -.substraction\n *.multiplication\n /.division\n .*modulus\n");
printf("enter your choice:");
scanf("%c",&ch);
printf("enter num1:");
scanf("%d",&a);
printf("enter num2:");
scanf("%d",&b);
switch(ch)
	{
	case'+':x=a+b;
		printf("sum=%d",x);
		break;
	case'-':x=a-b;
		printf("diff=%d",x);
		break;
	case'*':x=a*b;
		printf("multiplication=%d",x);
		break;
	case'/':x=a/b;
		printf("division=%d",x);
		break;
	case'%':x=a%b;
		printf("modulus=%d",x);
		break;
	default :
		printf("error");
	}
}
