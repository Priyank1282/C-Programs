#include<stdio.h>


void min_2();
void min_2(){
    int a,b,c;
    printf("Enter 2 numbers:");
    scanf("%i %i",&a,&b);
    c=(a<b)?a:b;
    printf("minimum of 2 numbers is %i",c);
}

void odd_even();
void odd_even(){
    int a;
    printf("Enter a Number:");
    scanf("%i",&a);
    (a%2==0)?printf("Even number"):printf("Odd number");
}



int main(){
    odd_even();
}