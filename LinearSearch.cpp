#include<stdio.h>
main()
{
	int data[100],value,num,loc,count=0,item;
	printf("Enter the total number of stored numbers\n");
	scanf("%d",&value);
	printf("Enter the number one by one\n");
	for(num=1;num<=value;num++)
	{
		scanf("%d",&data[num]);
	}
	printf("Enter the number you want to search\n");
	scanf("%d",&item);
	for(num=1;num<=value;num++)
	{
		if(item==data[num])
		   
		   	   loc=num;
		else
		      count++;
			         
	}
	if(count==value)
	    	printf("Not found\n");
		
	else
	    {
	    	printf("Found the number\n");
	    	printf("Location of the number %d\n",loc);
			}	
}
