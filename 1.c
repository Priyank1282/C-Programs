#include<stdio.h>

int main(){
    int n,ans=1 ;
    printf("Enter Number :");
    scanf("%i",&n);
    for(int i=1;i<=10;i++)
    {
        ans=n*i;
        printf("\n %i x %i = %i",n,i,ans);
    }
}