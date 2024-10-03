//compound interest program
//p= principal,r=rate,t=time,ci=compound interest a=amount n=number of time interest compounded
#include <stdio.h>
#include <math.h>
int main () {
int t,n;
    float p,r,ci,a;
    printf("Enter principal: ");
    scanf ("%f", &p);
    printf("Enter rate: ");
    scanf("%f", &r);
    printf("Enter years (in years): ");
    scanf("%d", &t);
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);
    r= r / 100;
     a=p*pow((1+r/n),n*t);
     ci=a-p;
     printf("The compound interest is: %.2f\n",ci);
     printf("total amount after %d years is %.2f",t, a);
     return 0;
     }