#include<stdio.h>
int main()
{
	int num,count=0,i,size,b,a;
	printf("Enter Roll number:");
	scanf("%d",&num);
	int arr[4]=[1610,1510,1410,1310];
	b=num;
	while(num!=0)
	{
		num=num/10;
		count++;
	}
	size=count;
	a=size-4;
	printf("%d \n",size);
	printf("%d",a);
	while(a)
	{
		b=b/10;
		a--;
	}
	for(i=0;i<4;i++)
	{
		switch (arr[i])
		case'1610':
		printf("C.S.E.");
		case'1510':
		printf("Pharma");
		case'1410':
		printf("M.E.");
		case'1310':
		printf("E.C.E.");
	}
	return 0;
}
