#include<stdio.h>
int main()
{
	int num,i,x,y,z,a,t,w;
	scanf("%d",&num);
	int arr[num];
	for(i=0;i<num;i++)
	{
		printf("Enter the number:");
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
	printf("%d\n",y);
	z=arr[0];
	    for(i=1;i<num;i++)
    {
    	if(z>arr[i])
    	{
    		z=arr[i];
		    a=i;
		}
	}
    printf("%d\n",z);
    printf("%d\n",a);
    
    
    w=arr[y];
    arr[y]=arr[a];
    arr[a]=w;
    for(i=0;i<num;i++)
    {
    	printf("\n%d",arr[i]);
	}
    
}
