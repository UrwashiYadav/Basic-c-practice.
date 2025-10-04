// Area of traingle = 0.5 * l * b
#include<stdio.h>
int main()
{
	
	
	float l, b, result;
	
	printf("Enter a value of l: ");
	scanf("%f", &l);
	
	printf("Enter a value of b: ");
	scanf("%f", &b);
	
	result = 0.5 * l * b;
	
	printf("Area of traingle = %.2f\n", result);
	
	return 0;
}