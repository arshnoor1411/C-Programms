#include<stdio.h>
int main()
{
	int num,i,b,value;
	scanf("%d",&num);
	int a[100];
	for(i=0;i<num;i++)
	{
	scanf("%d",&a[i]);
    }
    printf("Enter index number to be replaced:");
    scanf("%d",&b);
    printf("Enter value to be inserted:");
    scanf("%d",&value);
    for(i=num-1;i>=b-1;i--)
	{
    	a[i+1]=a[i];
	}
    	num++;
		a[b-1]=value;
	for(i=0;i<num;i++)
	{
	printf("%d\n",a[i]);
    }
    return 0;
}
