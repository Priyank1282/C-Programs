#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void while_1_5();
void while_1_5()
{
    int i=1;
    while(i<=5)
    {
        printf("%i\n",i);
        i++;
    }
}

void while_1_10();
void while_1_10()
{
    int i=1;
    while(i<=10)
    {
        printf("%i\n",i);
        i++;
    }
}

void sum_n_while();      //time taking
void sum_n_while(){
    int i=1,sum=0,n;
    printf("Enter N:");
    fflush(stdin);
    scanf("%i",&n);
    while(i<=n)
    {
        sum=sum+i;
    }
    printf("sum to n is: %i",sum);
}

void sum_n_for();      
void sum_n_for(){
    int i,sum=0,n;
    printf("Enter N:");
    fflush(stdin);
    scanf("%i",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum to %i is: %i\n",n,sum);
} 

void power_for();
void power_for()
{
    int base, exponent,power;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    for(int i=1; i<=exponent; i++)
    {
        power = power * base;
    }
    printf("%i ^ %i = %i\n", base, exponent, power);
}

void add_util_0();
void add_util_0()
{
    //program to add num until user enter 0
    int sum=0,n=1;
    for(int i =1;;i++)
    {
        printf("Enter num(0 for termination):");
        scanf("%i",&n);
        if(n==0)
            break;
        sum=sum+n;
    }
    printf("sum is %i\n",sum);
}

void reverse_num_while();           //doubt
void reverse_num_while()
{
    //reverser a num using while
    int n,rev;
    printf("Enter a number:");
    scanf("%i",&n);
    int i=1;

}

void palindrome();                  //doubt because que-16 is doubt
void palindrome(){

}

void prime_for();         //doubt




int main()
{
    prime_for();
}