#include<stdio.h>
int main()
{
	int quantity[4],i;
	float rate[4];
	char code[4][10];
	printf("Enter code(char), quantity(integer) ,rate(float)\n");
	for(i=0;i<=3;i++)
	{
		scanf("%s%d%f",&code[i],&quantity[i],&rate[i]);
	}
	printf("______________________________\n");
	printf("       INVENTORY REPORT       \n");
	printf("______________________________\n");
	printf("CODE|       QUANTITY   |  RATE\n");
	printf("______________________________\n");
	for(i=0;i<=3;i++)
	{
	  printf("|%s| %10d | %12.2f|\n",code[i],quantity[i],rate[i]);
	  printf("____________________________\n");
	}
	return 0;
}
