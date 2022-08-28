#include <stdio.h>
int min(int x, int y, int z)
{
    if (x < y && x < z)
    {
        return x;
    }
    else if (y < z && y < x)
    {
        return y;
    }
    else
    {
        return z;
    }
}

int main()
{
    int first, second, third;
    printf("Enter 1st number : ");
    scanf("%d", &first);
    printf("Enter 2nd number : ");
    scanf("%d", &second);
    printf("Enter 3rd number : ");
    scanf("%d", &third);

    int minimum = min(first, second, third);
    printf("Minimum number is: %d", minimum);
}