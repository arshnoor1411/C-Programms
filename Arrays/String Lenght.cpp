#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=0,l=0;
	char str[]={"hello ram"};
	while(str[i]!='\0')
	{
		l++;
		i++;
	}
	puts(str);
	printf("%d",l);
}
