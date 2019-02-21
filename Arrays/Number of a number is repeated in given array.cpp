#include<stdio.h>
int main()
{
	int size,i,sum=0,count=0,rem;
	scanf("%d",&size);
	int arr[100]={0},new_arr[100]={0};
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		while(arr[i]!=0)
		{
		rem=arr[i]%10;
		arr[i]=arr[i]/10;
		new_arr[rem]++;	
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d is repeated %d times\n",i,new_arr[i]);
	}
}
