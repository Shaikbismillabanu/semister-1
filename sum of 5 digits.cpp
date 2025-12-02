// write a c program for sum of n no.of digitss
#include<stdio.h>
int main()
{
	int num,sum,rem;
	printf("enter a n digit number:");
	scanf("%d",&num);
	sum=0;
	while(num!=0)
	{
		rem=num%10;
		sum+=rem;
		num=num/10;
	}
	printf("sum of digits is%d",sum);
	return 0;
}
