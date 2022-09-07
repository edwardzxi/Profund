#include <stdio.h>
int main()
{
    int a[3], max = -2e9;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter your number : ");
        scanf("%d", &a[i]);
        if (max < a[i])
            max = a[i];
    }
    printf("The maximum number is : %d", max);
    return 0;
}