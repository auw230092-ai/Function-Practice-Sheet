#include <stdio.h>

// Function prototype
void check_even(int n);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    check_even(num);

    return 0;
}

void check_even(int n)
{
    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}
