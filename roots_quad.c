#include <stdio.h>
#include<math.h>
int main(){
    float a,b,c,r1,r2,d;
    printf("Enter valus of A,B,C:");
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d)/(2*a));
        printf("Real Roots %.1f ,%.1f",r1,r2);
    }
    else if(d==0){
        r1=(-b/(2*a));
        r2=(-b/(2*a));
        printf("Equal roots: %.1f , %.1f",r1,r2);
    }
    else
    {
        printf("Roots are imaginary.");
    }
    
}