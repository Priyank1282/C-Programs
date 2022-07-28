//compund interst 
//(p*(1+r/100)^t)-p


#include<math.h>
#include<stdio.h>
int main(){
    float p,r,t,ci;
    printf("Enter value of P R T:");
    scanf("%f %f %f",&p,&r,&t);
    ci=(p*pow((1+r/100),t))-p;
    printf("Compund Interst :%f",ci);
    return 0;
}
