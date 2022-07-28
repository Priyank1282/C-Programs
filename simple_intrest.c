//simple  intrest 
//si(p*r*t)/100

#include<stdio.h>
int main(){
    float p,r,t,si;
    printf("Enter value of p:");
    scanf("%f",&p);
    printf("Enter value of r:");
    scanf("%f",&r);
    printf("Enter value of t:");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("Simple Interst:%f",si);
    return 0;
}
