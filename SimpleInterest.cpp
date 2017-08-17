#include<stdio.h>
int main()
{
	int p,n;
	float r,si;
	printf("Enter principle ,number of years,rate");
	scanf("%d%d%f",&p,&n,&r);
	si=p*n*r/100;
	printf("Simple interest =%f\n",si);
	return 0;
}

