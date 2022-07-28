#include<stdio.h>
int main()
{
    int a[10];
    for(int i=0;i<10;i++)
    {
        printf("Enter Value:");
        scanf("%i",&a[i]);
    }
    for (int i=0;i<10;i++)
    {
        printf("\t\n%i",a[i]);
    }
}