#include <stdio.h>
int main()
{
    int num[4];
    int sum = 0;
    int x;
    for (int i = 0; i < 4; i++)
    {
        printf("Enter 4 number : ");
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        if (num[i] % 2 == 0)
        {
            sum+=1;
        }
    }
    x=sum;
    printf("%d", x);
    return 0;
}