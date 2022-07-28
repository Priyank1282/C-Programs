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
    int size = sizeof(a)/sizeof(a[0]);
    printf("Size of array is %d",size);
}

void q3();
void q3()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter Elements:");
        scanf("%i",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("\na[%i] = %i",i,a[i]);
    }
}

void q4();
void q4(){
    int a[5];
    float avg=0;
    for(int i=0;i<5;i++)
    {
        printf("Enter Elements:");
        scanf("%i",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        avg=avg+a[i];
    }
    printf("Avg is %.2f",avg/5);
}

void q6();
void q6(){
    int a[5],max=0;
    for(int i=0;i<5;i++)
    {
        printf("Enter Value:");
        scanf("%i",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("maximum number is %i",max);
}

void q7();
void q7(){
    int a[5],min=0;
    for(int i=0;i<5;i++)
    {
        printf("Enter Value:");
        scanf("%i",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    printf("Minimum number is %i",min);
}

void q10();
void q10()
{
    int a[5],sc;
    for(int i=0;i<5;i++)
    {
        printf("Enter Element:");
        scanf("%i",&a[i]);
    }
    printf("Enter value:");
    scanf("%i",&sc);
    for(int i=0;i<5;i++)
    {
        if(a[i]==sc)
            printf("Entered Values stored at a[%i] address",i);
    }
}

// void q14();
// void q14(){
//     int a[5];
//     for(int i=0;i<5;i++)
//     {
//         printf("Enter Values:");
//         scanf("%i",&a[i]);

//     }
//     for(int i=0;i<5;i++)
//     {
//         for(int j=)
//     }
// }

void q15();
void q15(){
    int a[10]={3,6,9,2,1,3,7,9,5,0},temp;
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        printf("\n%i",a[i]);
    }
}

int main()
{
    q15();
}