#include <stdio.h>
int main()
{
    int a[3], min = 2e9;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
        if (min > a[i])
            min = a[i];
    }
    printf("%d", min);
    return 0;
}