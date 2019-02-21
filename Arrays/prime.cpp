#include<stdio.h>
#include<math.h>
int main()
{
	int j,i,count=0;
	int num,x;
	int arr[num];
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("Enetr Number:");
		scanf("%d",&num);
	}
	x=arr[0];
	for(i=2;i<=sqrt(x);i++)
		{
			if(x%i==0)
			count++;
		}
		if(count==0)
		printf("\n %d is ",x);
		else
		printf("\n %d is not prime",x);
		count=0;
	}

