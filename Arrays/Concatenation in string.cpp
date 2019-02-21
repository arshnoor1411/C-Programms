#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=0,j=0;
	char str[100];
	gets(str);
	char str1[100]={};
	while(str[i]!='\0')
	{
		if(str[i]>=97 && str[i]<123)
		{
			str1[j]=str[i]-32;
		}
		else
		{
			if(str[i]==' ')
			{
				str1[j]=' ';
			}
			else
			str1[j]=str[i]+32;
		}
		i++;
		j++;
	}
	str1[j]='\0';
	puts(str1);
}
