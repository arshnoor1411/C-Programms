#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,l,j,size;
	char str[100],temp;
	gets(str);
		l=strlen(str);
	for(i=1;i<l;i++)
	{
		for(j=0;j<l-i;j++)
		{
		if(str[j]>str[j+1])
		{
			temp=str[i];
			str[i]=str[j];
			str[j]=temp;
		}
		}
	}
	for(i=0;i<l;i++)
	{
		printf("%c\t",str[i]);
	}
}
