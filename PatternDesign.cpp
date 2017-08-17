#include<stdio.h>
main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		if(i>=2)
		{
		    for(j=1;j<=i;j++)
		      printf(" ");
        
		  for(k=4;k>=i;k--)
		  printf("*");
	      printf("\n");
	    }  
    }
}
