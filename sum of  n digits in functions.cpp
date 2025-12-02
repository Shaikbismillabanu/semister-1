//write a c program for sum of digits in functions
#include<stdio.h>
int digit(int n)
{
	int rem,sum=0;
	while(n>0)
	{
		rem=n%10;
		sum+=rem;
		n=n/10;
	}
	return sum;
}

int main()
{
	int n;
	printf("enter n value");
	scanf("%d",&n);
	printf("sum of digits is %d",digit(n));
	return 0;
}
