#include<stdio.h>
int main()
{
	int array[10],s,i,flag=0;
	for(i=0;i<10;i++)
	{
		printf("Enter Number=");
		scanf("%d",&array[i]);
	}
	printf("Enter item number to be searched=");
	scanf("%d",&s);
	for(i=0;i<10;i++)
	{
		if(array[i]==s)
		{
		printf("Item found \n");
		
		i=10;
		flag=1;
		}
		
		
	}
	if(flag==0)
	printf("Item not found \n");
	
	return 0;
}

