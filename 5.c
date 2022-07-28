#include<stdio.h>
int main(){
    int n,cube=1;
    printf("Enter Number of Terms:");
    scanf("%i",&n);
    for(int i=1;i<=n;i++)
    {
        cube=i*i*i;
        printf("\nNumber is : %i and cube of the %i is :%i",i,i,cube);
    }
}