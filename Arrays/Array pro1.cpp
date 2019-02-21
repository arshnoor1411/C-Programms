#include<stdio.h>
int main()
{
	int rollno[10];
	int i;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&rollno[i]);
	}
	for(i=1;i<=10;i++)
	{
		printf("Roll No.=%d \n",rollno[i]);
	}
	return 0;
}
