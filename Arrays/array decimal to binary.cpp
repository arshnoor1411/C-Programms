 #include<stdio.h>
#include<math.h>
int main()
{
	int num,a,i=0,bn=0,rem;
	int bin_num[32];
	scanf("%d",&num);
/*	while(num!=0)
	{
		rem=num%2;
		bn=bn+rem*pow(10,i);
		num=num/2;
		i++;
	}
	printf("%d",bn);
	*/
	while(num)
	{
		bin_num[i]=num&1;
	num>>1;
	}
	
	for(a=0;a<32;a++)
	{
		printf("%d",bin_num[num]);
	}
	return 0;
	
}
