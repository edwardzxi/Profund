#include<stdio.h>

int main() {
float w , h  ;
float bmi ;

printf("Please enter your height : " );
    scanf("%f" , &h );
    printf("Please enter your weight : " );
    scanf("%f" , &w );

if(h>0 && w>0){
    bmi = w/(h*h) ;

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

}
else {
    printf("Error");
}

return 0;
}