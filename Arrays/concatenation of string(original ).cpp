#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=0,k=0,j=0;
	char str1[100];
	char str2[100];
	char str3[200];
	gets(str1);
	gets(str2);
	while(str1[i]!=0)
	{
		str3[k]=str1[i];
		k++;
		i++;
	}
	str3[k++]=' ';
	i=0;
	while(str2[i]!=0)
	{
		str3[k]=str2[i];
		k++;
		i++;
	}
	str3[k]='\0';
	puts(str3);
	return 0;
}
