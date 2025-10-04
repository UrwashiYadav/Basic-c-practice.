// volume of cylinder = 3.14 * r * r * h
#include<stdio.h>
int main()
{
	
	int r;
	int h;
	float result;
	
	printf("Enter a value of r: ");
	scanf("%d", &r);
	
	printf("Enter a value of h: ");
	scanf("%d", &h);
	
	result = 3.14 * r * r * h;
	
	printf("volume of cylinder = %.2f\n", result);
}