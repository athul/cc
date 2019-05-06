#include<stdio.h>
long fact(int f);
void  main(){
	int n;
	long ft;
	printf("Enter the Number:\n");
	scanf("%d",&n);
	ft=fact(n);
	printf("The factorial of %d is %u\n\n",n,ft);
}
long fact(int f){
	long fct;
	if (f==1||f==0)
		return 1;
	else	
		fct=f*fact(f-1);
	return fct;
}
	
