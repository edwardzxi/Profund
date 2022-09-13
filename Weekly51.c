#include <stdio.h>
int main()
{
    int height[10];
    int sum = 0;
    int x;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter height(in cM) : ");
        scanf("%d", &height[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        sum += height[i];
        printf("%d\n", height[i]);
    }
    x = sum / 10;
    printf("The average is : %d", x);
    return 0;
}