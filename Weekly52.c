#include <stdio.h>
int main()
{
    int h1, h2, h3, h4, h5, h6, h7, h8, h9, h10;
    int sum, avg;

    printf("Enter height : ");
    scanf("%d", &h1);
    printf("Enter height : ");
    scanf("%d", &h2);
    printf("Enter height : ");
    scanf("%d", &h3);
    printf("Enter height : ");
    scanf("%d", &h4);
    printf("Enter height : ");
    scanf("%d", &h5);
    printf("Enter height : ");
    scanf("%d", &h6);
    printf("Enter height : ");
    scanf("%d", &h7);
    printf("Enter height : ");
    scanf("%d", &h8);
    printf("Enter height : ");
    scanf("%d", &h9);
    printf("Enter height : ");
    scanf("%d", &h10);

    printf("The height : %d , %d , %d , %d , %d , %d , %d , %d , %d , %d \n" , h1, h2, h3, h4, h5, h6, h7, h8, h9, h10);
    printf("The average is : %d " , (h1+ h2+ h3+ h4+ h5+ h6+ h7+ h8+ h9+ h10)/10 );
    return 0;
}