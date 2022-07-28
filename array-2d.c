#include<stdio.h>
int main()
{
    int a[3][5];     //initilization
    for(int i=0;i<3;i++)   //scanning for rows
    {
        for(int j=0;j<5;j++)   //scanning for columns
        {
            printf("Enter Vallue:");
            scanf("%i",&a[i][j]);    //scanning rows and columns at same time
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%i\t",a[i][j]);    //print
        }
        printf("\n");
    }
}