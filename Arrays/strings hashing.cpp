#include<stdio.h>
#include<string.h>
int main()
{
	int l=0,i,arr[100]={0};
	char str[100];
	gets(str);
	l=strlen(str);
	printf("%d",l);
	for(i=0;i<l;i++)
	{
		arr[str[i]]++;
	}
	for(i=0;i<122;i++)
	{
		if(arr[i]!=0)
		{
			printf("%c",i);
		}
	}
}
