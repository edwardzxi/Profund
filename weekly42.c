#include <stdio.h>
int main()
{
    int first, second, third;
    printf("Enter 1st number : ");
    scanf("%d", &first);
    printf("Enter 2nd number : ");
    scanf("%d", &second);
    printf("Enter 3rd number : ");
    scanf("%d", &third);

    if (first < second && first < third)
    {
        printf("The minimum number is %d", first);
    }
    else if (second < first && second < third)
    {
        printf("The minimum number is %d", second);
    }
    else
    {
        printf("The minimum number is %d", third);
    }
    return 0;
}