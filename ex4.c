#include <stdio.h>

// Function prototype
int square(int n);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = square(num);

    printf("Square = %d\n", result);

    return 0;
}

int square(int n)
{
    return n * n;
}
