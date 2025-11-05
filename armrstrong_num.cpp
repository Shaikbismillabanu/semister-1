#include<stdio.h>
#include<math.h>
int main()
{
	int num,len=1,sum=0,x;
	scanf("%d",&num);
    x=num;
	while(num!=0)
	{
		sum+=pow(num%10,len);
		num=num/10;
	}
	if(x==sum)
	{	
 		printf("the number is an amrstrong number");
	}
	 else
	 {
	  	printf("the number is not an amrstrong number");
	 }
	 return 0;
	
}
