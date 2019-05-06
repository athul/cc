#include <stdio.h>

int a,b,c,d,e,z,i,j;

int x[50];

int y[50];

char asdf;

main()

	{

	asdf:

	    printf("Enter Number of Matrices: ");

	    scanf("%d",&a);

	    printf("\n");

	 

	 

	    if (a<2)

	    {

	        printf("Matrices Should Not Be Lower Than 2\n\n");

	        goto asdf;

	    }

	 

	    c=a*a;

	     

	    for (b=0;b<c;b++)

	    {

	         

	        printf("Enter Element 1: ");

	        scanf("%d",&x[b]);

	    }

	    printf("\n");
	         

	    for (e=0;e<c;e++)

	    {

	        printf("Enter Element 2: ");

	        scanf("%d",&y[e]);

	    }

	     

	    printf("\n");

	    printf("*****Choose*****\n\n");

	    printf("Press 1 for Add \n");

	    printf("Press 2 for Multiply \n");

	    printf("Enter Choice: ");

	    scanf("%d",&d);

	    printf("\n");

	 

	 

	    if (d==1)

	    {

	        for(i=0;i<x[b];i++);

	        {

	            for (j=0;j<y[e];j++);

	            {

	                printf("\n");

	                z=x[i]+y[j];

	                printf("%d\t",&z);

	            }

	        }

	        
	    }
	    return 0;
	}