#include<stdio.h>
#include<string.h>
int main()
{
	int l,i,arr[100]={0};
	char str[100];
	gets(str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		arr[str[i]-65]++;
	}
	for(i=0;i<126;i++)
	{
		if(arr[i]!=0)
		{
			printf("%c",i+65);
		}
	}
}
