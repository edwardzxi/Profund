#include<stdio.h>

int main() {
float a , b  ;
float bmi ;

do
{printf("Enter your weight(KG.) : ");
scanf("%f" , &a );}
while (a<0);

do
{printf("Enter your height(M.) : ");
scanf("%f" , &b );}
while (b<0);

bmi = a/(b*b) ;

if(bmi<18.5) {
printf("Your BMI : %.1f / Underweight " , bmi);
} 
 else if (bmi>=18.5 && bmi<=24.9){
    printf("Your BMI : %.1f / Normalweight " , bmi);
 }
 else if (bmi>=25 && bmi<=29.9){
    printf("Your BMI : %.1f / Overweight " , bmi);
 }
else if (bmi>30){
    printf("Your BMI : %.1f / Obesity " , bmi);
 }

return 0;

}