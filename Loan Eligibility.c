//program of loan eligibility 
//author:Abdijabar Ahmed
#include <stdio.h>
int main(){ 
int age;
float income;
printf("Enter your age: ");
scanf("%d", &age );
printf("Enter your annual income: ");
scanf("%f",&income );
//qualifications 
if (age>= 21 &income>=21000 ){
printf("Congratulations you qualify for a loan.");}
else {
printf("Unfortunately,we are unable to offer you a loan at this time");}
  return 0;
 }