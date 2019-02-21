#include<stdio.h>
int main()
{
	int array[10],i,sum;                                                                                   
	float avg;
	for(i=0;i<10;i++)
	{
		printf("Enter Number=");
		scanf("%d",&array[i]);
		sum=sum+array[i];
		avg=sum/10;
	}
	printf("sum=%d \n",sum);
	printf("avg=%f",avg);
	return 0;
}
