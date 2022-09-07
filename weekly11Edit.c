#include <stdio.h>
#include <string.h>
int main()
{
   float tier[3] = {18.5, 25, 30};
   char str[4][50] = {"Underweight", "Normalweight", "Overweight", "Obesity"};
   float bmi, weight, height;
   printf("Enter Weight : ");
   scanf("%f", &weight);
   printf("Enter Height (in meter) : ");
   scanf("%f", &height);
   bmi = weight / (height * height);
   for (int i = 0; i <= 3; i++)
   {
      if (bmi < tier[i])
      {
         printf("%.2f : %s", bmi, str[i]);
         break;
      }
      if (bmi >= tier[2])
      {
         printf("%.2f : Obesity", bmi);
      }
   }
      
   return 0;
}