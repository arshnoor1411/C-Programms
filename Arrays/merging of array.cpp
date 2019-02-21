#include<stdio.h>
int main()
{
	int num1,num2,num,arr[100]={0},narr[100]={0},newarr[100]={0},i,j,k=0;
	scanf("%d",&num1);
	scanf("%d",&num2);
	for(i=0;i<num1;i++)
	{
		printf("arr[i]");
		scanf("%d",&arr[i]);
	}
	for(j=0;j<num2;j++)
	{
		printf("narr[j]");
		scanf("%d",&narr[j]);
	}
	num=num1+num2;
	for(i=0;i<num1;i++)
	{
		newarr[k]=arr[i];
        k++;
        
	}
	j=0;
	while(j<num2)
	{
		newarr[k]=narr[j];
		k++;
		j++;
	}
	for(i=0;i<num;i++)
	{
		printf("%d\n",newarr[i]);
	}
	return 0;
}
