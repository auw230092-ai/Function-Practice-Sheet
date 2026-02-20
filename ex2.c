#include <stdio.h>

// Function prototype
int add(int a, int b);

int main()
{
    int x, y;

    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    int result = add(x, y);

    printf("Sum = %d\n", result);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}
