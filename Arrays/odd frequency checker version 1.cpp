#include<stdio.h>
int main()
{
	int num,i,j;
	printf("Enter number");
	scanf("%d",&num);
	int arr[i];
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
    for(i=0;i<num;i++)
    {
    if(j>arr[i])
    j;
    else
    j=arr[i];
    }
    int new_arr[j+1]={0};
	for(i=0;i<num;i++)
	{
		new_arr[arr[i]]++;
   }
   for(i=0;i<j+1;i++)
   {
		if(new_arr[i]!=0 && new_arr[i]%2!=0)
		{
			printf("%d %d\n",i,new_arr[i]);
		}
}
}
