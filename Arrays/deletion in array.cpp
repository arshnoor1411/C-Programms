#include<stdio.h>
int main()
{
		int num,i,idx,value;
	scanf("%d",&num);
	int a[100];
	for(i=0;i<num;i++)
	{
	scanf("%d",&a[i]);
    }
    printf("Enter index number to be deleted:");
    scanf("%d",&idx);
    for(i=idx;i<num;i++)
	{
    a[idx-1]=a[idx];
    	idx++;
	}
  	num--;
	for(i=0;i<num;i++)
	{
		printf("%d\n",a[i]);
	}
}
