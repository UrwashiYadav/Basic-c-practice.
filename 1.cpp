
//(a+b)^2 = a^2+b^2+2ab
#include <stdio.h>

int main() 
{
    int a, b, result;

    
    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    
    result = (a + b) * (a + b);

    
    printf("(a + b)^2 = %d\n", result);

    return 0;
}


