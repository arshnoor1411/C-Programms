#include<stdio.h>
#include<string.h>
int main()
{
	int i,l,arr1[100]={0};
	char str1[100];
	gets(str1);
	l=strlen(str1);
	for(i=0;i<l;i++)
	{
		arr1[str1[i]]++;
	}
	for(i=0;i<126;i++)
	{
		if(arr1[i]!=0)
		{
			printf("%c",i);
			printf("%c",i);
			
		}
	}
}
