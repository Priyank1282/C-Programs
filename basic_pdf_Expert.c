#include<stdio.h>
#include<math.h>

//que-1
void frequency();
void frequency(){
    float l,r,c;
    float freq;
    printf("Enter value of L,C,R:");
    scanf("%f %f %f",&l,&r,&c);
    freq=sqrt(1/(l*c) - (r*r)/(4*c*c)  );
    printf("Damped Natural Frequency %f",freq);
}


int main(){
    frequency();
}