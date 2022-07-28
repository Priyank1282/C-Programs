#include<stdio.h>

void q1();
void q1(){
    int a[5];
    for(int i=1;i<=5;i++)
    {
        printf("Enter Elements:");
        scanf("%i",&a[i]);
    }
    for(int i=1;i<=5;i++)
    {
        printf("\n%i",a[i]);
    }
}

void q2();
void q2(){
    int a[2];
    printf("Size of array is %d",sizeof(a));
}


int main()
{
    q2();
}