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
    int a , b , c , d , e ;
    printf("Enter 5 numbers : ");
    scanf("%d %d %d %d %d", &a , &b , &c , &d , &e);
    printf("maximum number : %d\n" , max(max(max(a,b),max(c,d)),e));
    return 0;
}