// volume of cuboid = l * b * h
#include<stdio.h>
int main()
{
	
	float l , b , h ,result;
	
	
	printf("Enter a value of l: ");
	scanf("%f", &l);
	
	printf("Enter a value of b: ");
	scanf("%f", &b);
	
	printf("Enter a value of h: ");
	scanf("%f", &h);
	
	result = l * b * h;
	
	printf("volume of cuboid = %.2f\n", result);
	
	return 0;
	
	
}