//area of trapezium = 1/2 * (length of parallel sides) * height between parallel sides
#include<stdio.h>
int main()
{
	
	int a;
	int b;
	int h; 
	float result;
	
	
	printf("Enter a value of a: ");
	scanf("%d", &a);
	
	printf("Enter a value of b: ");
	scanf("%d", &b);
	
	printf("Enter a value of h: ");
	scanf("%d", &h);
	
	result = 0.5 * (a + b)* h;
	
	printf("area of trapezium = %.2f\n", result);
	
	return 0;
}