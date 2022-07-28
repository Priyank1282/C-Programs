#include<stdio.h>
#include<math.h>
int main(){
    int n,sum=0;
    printf("Enter N:");
    scanf("%i",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+(pow(i,2));
    }
    printf("Sum of natural number till %i is %i in Series: 1^2+2^2+3^2+4^2+..N^2 ",n,sum);
}