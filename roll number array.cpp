#include<stdio.h>
int main()
{
	int roll_num[59],i,key,n;
	printf("enter n value");
	scanf("%d,&n");
	printf("enter array value");
	for(i=0;i<n;i++)
	{
		scanf("%d", roll_num[i]);
	}
	printf("enter key value");
	scanf("%d\n");
	for(i=0;i<0;i++)
	{
		if(key==roll_num[i])
		printf("element is in index is:%d ",i);
		break;
	}
	return 0;
}
