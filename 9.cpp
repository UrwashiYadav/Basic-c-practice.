//(a - b)^2 = a^2 + b^2 + 2ab
#include<stdio.h>
int main()
{
	
	int a;
	int b;
	float result;
	
	printf("Enter a value of a: ");
	scanf("%d", &a);
	
	printf("Enter a value of b: ");
	scanf("%d", &b);
	
	result = a * a + b * b - 2 *a * b;
	
	printf("(a - b)^2 = %.2f", result);
	
	return 0;
}