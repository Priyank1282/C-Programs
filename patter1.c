#include<stdio.h>

int main(){
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<5;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // for(int i=0;i<2;i++)
    // {
    //     for(int j=0;j<2;j++)  
    //     {
    //         printf("\t%i",b[i][j]);
    //     }
    //     printf("\n");
    // }
}