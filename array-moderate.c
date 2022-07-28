#include<stdio.h>

void q2();
void q2(){
    int a[2][2],b[2][2],c[2][2],sum;
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
            sum=a[i][j]+b[i][j];
            c[i][j]=sum;
            sum=0;        
        }
    }
    for(int i=0;i<2;i++)  
    {
        for(int j=0;j<2;j++)   
        {
            printf("%i\t",c[i][j]);        
        }
        printf("\n");
    }
}

void q3();
void q3()
{
    
}


int main(){
    q2();
}