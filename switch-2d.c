#include<stdio.h>
//addition and Substraction of 2d matrix

int main(){
    int a[2][2],b[2][2],c[2][2],option,sum,sub;
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
    printf("\n1.Addition:\n2.Substraction:\n");
    scanf("%i",&option);
    switch (option)
    {
    case 1:
        for(int i=0;i<2;i++)  
        {
            for(int j=0;j<2;j++)   
            {
                sum=a[i][j]+b[i][j];
                c[i][j]=sum;
                sum=0;        
            }
        }
        printf("Addition of 2 Matrix is :\n");
        for(int i=0;i<2;i++)  
        {
            for(int j=0;j<2;j++)   
            {
                printf("%i\t",c[i][j]);        
            }
            printf("\n");
        }
        break;
    case 2:
        for(int i=0;i<2;i++)  
        {
            for(int j=0;j<2;j++)   
            {
                sub=a[i][j]-b[i][j];
                c[i][j]=sub;
                sub=0;        
            }
        }
        printf("Substraction of 2 Matrix is :\n");
        for(int i=0;i<2;i++)  
        {
            for(int j=0;j<2;j++)   
            {
                printf("%i\t",c[i][j]);        
            }
            printf("\n");
        }
        break;

    default:printf("Invalid Option");
    }
}