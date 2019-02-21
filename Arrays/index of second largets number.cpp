#include<stdio.h>
int main()
{
	int num,i,x,y,c,d;
	scanf("%d",&num);
	int arr[num];
	for(i=0;i<num;i++)
	{
		printf("enter number:");
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
   arr[y]=-11111;
	c=arr[0];
	for(i=1;i<num;i++)
    {
    	if(c<arr[i])
    	{
    		c=arr[i];
		    d=i;
		}
	}
	printf("%d\n",x);
	printf("%d\n",y);
	printf("value=%d\n",c);
	printf("index=%d\n",d);
}
