#include <stdio.h>
void main()
{
int x1[20][20],x2[20][20],x3[20][20],m1,n1,m2,n2;
int i,j,k;
printf("enter the raw and column of matrix 1 \n");
scanf("%d %d",&m1,&n1);
printf("enter the raw and column of matrix 2 \n");
scanf("%d %d",&m2,&n2);
if(n2==m1)
{
	printf("enter the value of marix 1 \n");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			scanf("%d",&x1[i][j]);
		}
	}
					
	printf("enter the value of marix 2\n");

	for(i=0;i<m2;i++)
	{
		for(j=0;j<n2;j++)
		{
			scanf("%d",&x2[i][j]);
		}
	}
	
	for(i=0;i<m2;i++)
	{
		for(j=0;j<n2;j++)
		{
		x3[i][j]=0;
			for(k=0;k<n1;k++)
			x3[i][j]=x3[i][j]+x1[i][k]*x2[k][j];
		}
	}
	printf("multiplication of matrix is \n");
	for(i=0;i<m2;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("%d \t",x3[i][j]);
		}
	printf("\n");
	}
}
else
	printf("invalid input ");
}
