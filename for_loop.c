#include<stdio.h>
#include<stdlib.h>

void ten_times();
void ten_times()
{
    for(int i=1;i<=10;i++)
    {
        printf("\nWelcome to C-Tag");
    }
}

void one_hundred();
void one_hundred()
{
    for (int i=1;i<=100;i++)
    {
        printf("\t%i",i);
    }
}

void one_hundred_odd();         //Write a C program to print all odd number between 1 to 100.
void one_hundred_odd()
{
    for (int i=1;i<=100;i++)
    {
        if(i%2!=0)
            printf("\t%i",i);
    }
}

void one_hundred_even();         //Write a C program to print all even number between 1 to 100.
void one_hundred_even()
{
    for (int i=1;i<=100;i++)
    {
        if(i%2==0)
            printf("\t%i",i);
    }
}


void one_hundred_sum();
void one_hundred_sum()
{
    int sum=0;
    for(int i=1;i<=100;i++)
    {
        sum=sum+i;   
    }
    printf("%i\n",sum);
}

void mul_table();         //Write a C program to print multiplication table of any number.
void mul_table()          //HW
{
    int num,ans;
    printf("Enter No:");
    scanf("%i",&num);
    for(int i=1;i<=10;i++)
    {
        ans=num*i;
        printf("%i X %i = %i\n",num,i,ans);
    }
}

void factorial();            //HW
void factorial(){
    int num,ans=1;
    printf("Enter No:");
    scanf("%i",&num);
    for(int i=1;i<=num;i++)
    {
        ans=ans*i;
    }
    printf("%i\n",ans);
}

void factors();               //HW
void factors(){
    int num,ans;
    printf("Enter No:");
    scanf("%i",&num);
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
            printf("%i\n",i);
    }
}

void sum_n();         //Write a C program to find sum of all natural numbers between 1 to n.
void sum_n(){
    int n,sum=0;
    printf("Enter N:");
    scanf("%i",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%i\n",sum);
}




void sum_even_n();    // Write a C program to find sum of all even numbers between 1 to n.
void sum_even_n()
{
    int n,sum=0;
    printf("Enter N:");
    fflush(stdin);
    scanf("%i",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum = sum+i;
            
        }
    }
    printf("%i\n",sum);
}

void sum_odd_n();     //Write a C program to find sum of all odd numbers between 1 to n.
void sum_odd_n()
{
    int n,sum=0;
    printf("Enter N:");
    fflush(stdin);
    scanf("%i",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            sum =sum + i;
            
        }
    }
    printf("%i\n",sum);
}




int main()
{
    sum_n();
}

