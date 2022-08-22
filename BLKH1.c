#include <stdio.h>

int main()
{
    float x, y;
    float ans;
    int sign;

    printf("Enter your first number : ");
    scanf("%f", &x);

    printf("(1 = + , 2 = - , 3 = x , 4 = / ) \n Enter your sign : ");
    scanf("%d", &sign);

    printf("Enter your second number : ");
    scanf("%f", &y);

    if (sign == 1)
    {
        ans = x + y;
        printf("Your answer is : %f ", ans);
    }
    else if (sign == 2)
    {
        ans = x - y;
        printf("Your answer is : %f ", ans);
    }
    else if (sign == 3)
    {
        ans = x * y;
        printf("Your answer is : %f ", ans);
    }
    else if (sign == 4)
    {
        ans = x / y;
        printf("Your answer is : %.2f ", ans);
    }
    else
    {
        printf("ERROR");
    }

    return 0;
}