#include<stdio.h>
int main()
{
	int size,v,i,j,count=0;
	scanf("%d",&size);
	int arr[100]={0};
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
			else
			{
				printf("%d",arr[i]);
			}
			v=count;
			printf("%d\n",v);
		}
	}
	for(i=0;i<size;i++)
	{
	//printf("%d",count);
}
//	if(arr[i])
}
