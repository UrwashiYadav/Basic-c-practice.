// Area of cube = 6 * a^2
#include<stdio.h>
int main()
{
	
	int a;
	float result;
	
	printf("Enter a value of a: ");
	scanf("%d", &a);
	
	result = 6 * a * a;
	
	printf("area of cube = %.2f\n", result);
	
}