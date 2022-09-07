#include <stdio.h>
int main()
{
   int a[3],min = a[0];
    for(int i = 0 ; i < 3 ; i++){
        printf("Enter your number : ");
        scanf("%d", &a[i]);
        if(min < a[i]);
        min = a[i];
    }
    printf("%d", min);
        return 0;
    }