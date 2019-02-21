#include<stdio.h>
int main()
{
	int size,i,j,count=0,flag=0;
	scanf("%d",&size);
	int arr[100],arr0[100];
	for(i=0;i<size;i++)
	{
		printf("Enter 10 digit number");
		scanf("%d",&arr[i]);
		arr0[i]=-1;
	}
	for(i=0;i<size;i++)
	{
		count=1;
		for(j=i+1;j<size;j++)
		{
		 if(arr[i]==arr[j])
	    {
	    	count++;
            arr0[j]=0;
		}
	}
	if(arr0[i]!=0)
	{
		arr0[i]=count;
	}	
	}
	for(i=0;i<size;i++)
	{
		if(arr0[i]!=0)
    {
	printf("%d	%d	",arr[i],arr0[i]);
	}
}
return 0;

}
