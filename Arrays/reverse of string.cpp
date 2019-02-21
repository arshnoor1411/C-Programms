#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=0,l=0,a,j=0;
	char str[1000]={0};
	gets(str);
	while(str[i]!='\0')
	{
		l++;
		i++;
	}
	printf("%d",l);
	for(i=0;i<=l-1;i++)
	{
		a=str[i];
		str[i]=str[j];
		str[j]=a;
		j--;
	}
	puts(str);
	return 0;
}
