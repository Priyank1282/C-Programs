#include<stdio.h>
int main()
{
    int a[2][2],b[2][2];
    for(int i=0;i<2;i++)   //scanning for rows
    {
        for(int j=0;j<2;j++)   //scanning for columns
        {
            printf("Enter Value of 1st Matrix:");
            scanf("%i",&a[i][j]);    //scanning rows and columns at same time
        }
    }
    for(int i=0;i<2;i++)   //scanning for rows
    {
        for(int j=0;j<2;j++)   //scanning for columns
        {
            printf("Enter Value of 2nd Matrix:");
            scanf("%i",&b[i][j]);    //scanning rows and columns at same time
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            a[i][j]=a[i][j]+b[i][j];
            b[i][j]=a[i][j]-b[i][j];
            a[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("1st Matrix\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)  
        {
            printf("\t%i",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("2nd Matrix\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)  
        {
            printf("\t%i",b[i][j]);
        }
        printf("\n");
    }
}