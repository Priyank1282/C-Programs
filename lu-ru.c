#include<stdio.h>
int main()
{
    int a[3][3];
    for(int i=0;i<3;i++)   //scanning for rows
    {
        for(int j=0;j<3;j++)   //scanning for columns
        {
            printf("Enter Value of 1st Matrix:");
            scanf("%i",&a[i][j]);    //scanning rows and columns at same time
        }
    }
    for(int i=0;i<3;i++)   //scanning for rows
    {
        for(int j=0;j<3;j++)   //scanning for columns
        {
            if(i==1 && j==0 || i==2 && j==0 || i==2 && j==1)
                printf("\t");
            else
                printf("\t%i",a[i][j]);
        }
        printf("\n");
    }
    
    int b[3][3];
    for(int i=0;i<3;i++)   //scanning for rows
    {
        for(int j=0;j<3;j++)   //scanning for columns
        {
            printf("Enter Value of 1st Matrix:");
            scanf("%i",&b[i][j]);    //scanning rows and columns at same time
        }
    }
    for(int i=0;i<3;i++)   //scanning for rows
    {
        for(int j=0;j<3;j++)   //scanning for columns
        {
            if(i==1 && j==2 || i==2 && j==1 || i==2 && j==2)
                printf("\t");
            else
                printf("\t%i",b[i][j]);
        }
        printf("\n");
    }
    

}