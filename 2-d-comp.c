#include<stdio.h>
int main(){
    int a[2][2],b[2][2],temp=0;
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
            if(a[i][j]==b[i][j])
                temp++;
        }
    }
    if(temp==4)
        printf("2 Matrix are Equal");
    else
        printf("Not Equal");
}