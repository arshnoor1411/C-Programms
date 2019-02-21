#include<stdio.h>
int main()
{
	int num,i,arr[100]={0},j,a=0;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<num-1;i++)
	{
		for(j=0;j<num-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				a=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=a;
			}
		}
	}
	for(i=0;i<num;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
