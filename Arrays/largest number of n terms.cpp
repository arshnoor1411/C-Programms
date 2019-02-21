#include<stdio.h>
int main()
{
	int num,i,x,y;
	scanf("%d",&num);
	int arr[num];
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
    x=arr[0];
    for(i=1;i<num;i++)
    {
    	if(x<arr[i])
    	{
    		x=arr[i];
		    y=i;
		}
	}
	
	printf("%d\n",x);
	printf("%d",y);
}
