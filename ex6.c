#include <stdio.h>

// Function prototype
int tempAdvisor(int temp, int fan);

int main()
{
    int temperature, fan;

    printf("Enter temperature: ");
    scanf("%d", &temperature);

    printf("Enter fan status (1 = ON, 0 = OFF): ");
    scanf("%d", &fan);

    int result = tempAdvisor(temperature, fan);

    switch(result)
    {
        case 1:
            printf("Turn ON the fan\n");
            break;
        case 2:
            printf("Temperature is normal\n");
            break;
        case 3:
            printf("Turn ON fan immediately\n");
            break;
        case 4:
            printf("Fan already running\n");
            break;
        default:
            printf("No action needed\n");
    }

    return 0;
}

int tempAdvisor(int temp, int fan)
{
    if (temp < 20 && fan == 0)
        return 1;
    else if (temp < 20 && fan == 1)
        return 4;
    else if (temp >= 20 && temp <= 30)
        return 2;
    else if (temp > 30 && fan == 0)
        return 3;
    else
        return 0;
}
