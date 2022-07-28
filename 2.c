#include<stdio.h>


int main(){
    int a,b,c;
    printf("Enter 1st side of trinagle:");
    scanf("%i",&a);
    printf("Enter 2nd side of trinagle:");
    scanf("%i",&b);
    printf("Enter 3rd side of trinagle:");
    scanf("%i",&c);
    if(a==b && b==c)
    {
        printf("Triangle with sides %i %i %i is Equilateral triangle",a,b,c);
    }
    else if (a==b || b==c || a==c)
    {
        printf("Triangle with sides %i %i %i is Isosceles triangle",a,b,c);
    }
    else
        printf("Triangle with sides %i %i %i is Scalence triangle",a,b,c);
}