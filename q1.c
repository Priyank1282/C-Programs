#include<stdio.h>
#define pi 3.14
struct area
{
    float radius;
    float length;
    float breadth;
};

int main()
{
    struct area a;
    printf("Enter Radius of Circle:");
    scanf("%f",&a.radius);
    printf("Enter Length of Rectangle:");
    scanf("%f",&a.length);
    printf("Enter Breadth of Rectangle:");
    scanf("%f",&a.breadth);
    printf("\nArea of Circle is :%.1f",(pi*a.radius*a.radius));
    printf("\nArea of Rectangle is :%.1f",(a.length*a.breadth));
}