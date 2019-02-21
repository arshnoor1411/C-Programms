#include<stdio.h>
int fibo(int n)
{   
    int result,fib;
	if(n<=1)
	{
	return n;
	}
	else
	{
	result=fib(n-1)+fib(n-2);
    printf("%d",result);
	}
}
int main()
{
	int n,result,fib;
	printf("Enter nth term=");
	scanf("%d",&n);
	result=fibo(n);
}
