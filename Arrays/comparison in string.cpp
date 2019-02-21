#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=0,l=0,j=0,length=0;
	char str1[100]={0};
	char str2[100]={0};
	gets(str1);
	while(str1[i]!='\0')
	{
		l++;
		i++;
	}
	printf("%d\n",l);
	gets(str2);
	length=0;
	while(str2[j]!='\0')
	{
		length++;
		j++;
	}
	printf("%d",length);
	while(l==length)
	{
		for(i=0;i<l;i++)//str1[i]=='\0'&&str2[j]=='\0')
		{
			str1[i]=str2[j];
			puts(str1);
			break;
		}
	}
   /* if(str1[i]=='\0'||str2[j]=='\0')
		{
			printf("%s",i);
		}
	*/
}
