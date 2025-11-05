#include<stdio.h>
int main()
{
	int length;
	printf("enter the length value");
	scanf("%d",&length);
	int breath;
	printf("enter the breath value");
	scanf("%d",&breath);
	int area,perimeter;
	area=length*breath;
	perimeter=2*(length+breath);
	printf("the area of the rectangle is %d\n",area);
	printf("the perimeter of rectangle is %d",perimeter);
	scanf("%d,%d",&length,&breath);
	return 0;
	
}
