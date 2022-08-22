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

switch (sign)
{
    case 1:
        ans = x + y;
        break;
    case 2:
        ans = x - y;
        break;
    case 3:
        ans = x * y;
        break;
    case 4:
        ans = x / y;
        break;
    default:
        printf("ERROR");
        return 0;
}
printf("Your answer is : %f " , ans);

    return 0;
}