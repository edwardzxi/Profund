#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter number : ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if (a % 2 == 0 && b % 2 == 0 && c % 2 == 0 && d % 2 == 0)
    {
        printf("4");
    }
    else if (a % 2 == 0 && b % 2 == 0 && c % 2 == 0 && d % 2 != 0)
    {
        printf("3");
    }
    else if (a % 2 == 0 && b % 2 == 0 && c % 2 != 0 && d % 2 == 0)
    {
        printf("3");
    }
    else if (a % 2 == 0 && b % 2 != 0 && c % 2 == 0 && d % 2 == 0)
    {
        printf("3");
    }
    else if (a % 2 != 0 && b % 2 == 0 && c % 2 == 0 && d % 2 == 0)
    {
        printf("3");
    }
    else if (a % 2 != 0 && b % 2 != 0 && c % 2 == 0 && d % 2 == 0)
    {
        printf("2");
    }
    else if (a % 2 != 0 && b % 2 == 0 && c % 2 != 0 && d % 2 == 0)
    {
        printf("2");
    }
    else if (a % 2 != 0 && b % 2 == 0 && c % 2 == 0 && d % 2 != 0)
    {
        printf("2");
    }
    else if (a % 2 == 0 && b % 2 != 0 && c % 2 != 0 && d % 2 == 0)
    {
        printf("2");
    }
    else if (a % 2 == 0 && b % 2 != 0 && c % 2 == 0 && d % 2 != 0)
    {
        printf("2");
    }
    else if (a % 2 == 0 && b % 2 == 0 && c % 2 != 0 && d % 2 != 0)
    {
        printf("2");
    }
    else if (a % 2 != 0 && b % 2 != 0 && c % 2 != 0 && d % 2 == 0)
    {
        printf("1");
    }
    else if (a % 2 != 0 && b % 2 != 0 && c % 2 == 0 && d % 2 != 0)
    {
        printf("1");
    }
    else if (a % 2 != 0 && b % 2 == 0 && c % 2 != 0 && d % 2 != 0)
    {
        printf("1");
    }
    else if (a % 2 == 0 && b % 2 != 0 && c % 2 != 0 && d % 2 != 0)
    {
        printf("1");
    }
    return 0;
}