#include <stdio.h>
int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
int main()
{
    int a, b;
    printf("Enter 2 numbers : ");
    scanf("%d %d", &a , &b);
    printf("maximum number : %d\n" , max(a,b));
    return 0;
}