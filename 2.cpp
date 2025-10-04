//area of circle = 3.14*r*r

#include<stdio.h>
int main ()
{
	int r;
	float result;
	
	printf("Enter a value of r: ");
	scanf("%d", &r);
	
	
	result = 3.14 * r * r;
	
	printf("area of circle = %.2f\n", result);
	
	return 0;
	
	
}