#include<stdio.h>
int main(){
    float pi=3.14,r,area;
    
    printf("Enter Radius:");
    scanf("%f",&r);
    
    area=pi*r*r;
    
    printf("Area of Circle: %f",area);
    return 0;
}
