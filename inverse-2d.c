#include<stdio.h>
int main(){
    int a[2][2]={1,2,3,4},b[2][2],temp;
    float c[2][2],t,t1;
    // for(int i=0;i<2;i++)   //scanning for rows
    // {
    //     for(int j=0;j<2;j++)   //scanning for columns
    //     {
    //         printf("Enter Value of 1st Matrix:");
    //         scanf("%i",&a[i][j]);    //scanning rows and columns at same time
    //     }
    // }
    // b[0][0]=4;
    // b[1][1]=1;
    // b[0][1]=-2;
    // b[1][0]=-3;
    temp=a[0][0];
    b[1][1]=temp;
    temp=a[1][1];
    b[0][0]=temp;
    for(int i=0;i<2;i++)   
    {
        for(int j=0;j<2;j++)  
        {
            t=(1*4)-(2*3);
            t1=1/t;
            c[i][j]=t1*b[i][j];
        }
    }
    printf("Inverse Matirx:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)  
        {
            printf("\t%.2f",c[i][j]);
        }
        printf("\n");
    }
}