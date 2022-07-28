#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void prime_no();
void prime_no(){
    int n,c=0;
    printf("Enter Number:");
    scanf("%i",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }
    if(c==2)
        printf("Prime Number");
    else    
        printf("Not a prime number");
}

void armstrong();
void armstrong(){
    int n,sum=0;
    printf("Enter Number:");
    scanf("%i",&n);
    int d=n;
    while(n>0)
    {
        sum=sum+pow((n%10),3);
        n=n/10;
    }
    if(sum==d)
        printf("is a armstrong number");
    else    
        printf("not an armstrong number");
}


void armstrong_n();
void armstrong_n()
{
    int er,sr,d,sum;
    printf("\nEnter Start Range:");
    scanf("%i",&sr);
    printf("Enter End Range:");
    scanf("%i",&er);
    for(int i=1;i<=er;i++)
    {
        int no=i;
        while(no>0)
        {
            sum=sum+(no%10)*(no%10)*(no%10);
            no=no/10;
        }
        if (i==sum)
            printf("%5i",i);
        sum=0;
    }
    printf("\n");
}

void perfect_no();
void perfect_no(){
    int n,sum=0,mul=1;
    printf("Enter No:");
    scanf("%i",&n);
    while(n>0)
    {
        sum=sum+(n%10);
        mul=mul*(n%10);
        n=n/10;
    }
    if(mul==sum)
        printf("Perfect Number");
    else
        printf("Not A Perfect Number");
}

void ones_complement();
void ones_complement(){
    int n;
    printf("Enter Number:");
    scanf("%i",&n);
    while(n>0)
    {
        d=n%10;
        if
        n=n/10;
    }
}





int main()
{
    perfect_no();
}