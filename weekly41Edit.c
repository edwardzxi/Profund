#include <stdio.h>
int main()
{
    int a[3], min = 2e9;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter your number : ");
        scanf("%d", &a[i]);
        if (min > a[i])
            min = a[i];
    }
    printf("The minimum number is : %d", min);
    return 0;
}