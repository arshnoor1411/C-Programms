#include<stdio.h>
int main()
{
	int num,j,flag,i,save,target,q;
	scanf("%d",&num);
	int arr[num];
	for(i=0;i<num;i++)
	{
		printf("enter number:");
		scanf("%d",&arr[i]);
	}
	printf("Enter no. of queries:");
	scanf("%d",&q); 
	for(i=0;i<q;i++)
	{
		scanf("%d",&target);
		for(j=1;j<num;j++)
	{
		if (arr[j]==target)
		{
		  flag=1;
		  save=j;
	}
}
if(flag==0)
{
	save=-1;
}
printf("%d",save);
flag=0;
}
}
