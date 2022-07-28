#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void while_1_n();
void while_1_n(){
    int i=1,n;
    printf("Enter N:");
    scanf("%i",&n);
    while(i<=n)
    {
        printf("\n%i",i);
        i++;
    }
}

void for_1_n();
void for_1_n(){
    int n;
    printf("Enter N:");
    scanf("%i",&n);
    for(int i=1;i<=n;i++)
    {
        printf("\n%i",i);
    }
}

void while_n_1();
void while_n_1(){
    int n,i;
    printf("Enter N:");
    scanf("%i",&n);
    i=n;
    while(i>=1)
    {
        printf("\n%i",i);
        i--;
    }
}

void for_n_1();
void for_n_1(){
    int n,i;
    printf("Enter N:");
    scanf("%i",&n);
    for(i=n;i>=1;i--)
    {
        printf("\n%i",i);
    }
}

void alpha_while();
void alpha_while(){
    char ch;
    ch='a';
    while(ch<='z')
    {
        printf("\n%c",ch);
        ch++;
    }
}

void even_while();
void even_while(){
    int i=1;
    fflush(stdin);
    while(i<=100)
    {
        if(i%2==0)
        {
            printf("\n%i",i);
        }
        i++;
    }
}

void odd_for();
void odd_for(){
    for(int i=1;i<=100;i++)
    {
        if(i%2!=0)
        {
            printf("\n%i",i);
        }
    }
}

void sum_n();
void sum_n(){
    int sum=0,n,i;
    printf("Enter N:");
    scanf("%i",&n);
    for (i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum %i\n",sum);
}

void sum_n_even();
void sum_n_even(){
    int sum=0,n,i;
    printf("Enter N:");
    scanf("%i",&n);
    for (i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    printf("Sum %i\n",sum);
}

void sum_n_odd();
void sum_n_odd(){
    int sum=0,n,i;
    printf("Enter N:");
    scanf("%i",&n);
    for (i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    printf("Sum %i\n",sum);
}

void mul_table();
void mul_table(){
    int n,ans=1;
    printf("Enter N:");
    scanf("%i",&n);
    for(int i=1;i<=10;i++)
    {
        ans=i*n;
        printf("\n%i * %i = %i",n,i,ans);
    }
}

void count_digit_number();
void count_digit_number()
{
    int n,count=0;
    printf("Enter N:");
    fflush(stdin);
    scanf("%i",&n);
    while(n>0)
    {
        count++;
        n=n/10;
    }
    printf("%i",count);
}

void first_last_number();
void first_last_number()
{
    int n,first,last;
    printf("Enter Number:");
    scanf("%i",&n);
    
    last=n%10;
    while(n>10)
    {
        n=n/10;
    }
    first=n;
    printf("First %i \n Last %i\n",first,last);
}

void sum_first_last_number();
void sum_first_last_number()
{
    int n,first,last,sum=0;
    printf("Enter Number:");
    scanf("%i",&n);
    
    last=n%10;
    while(n>10)
    {
        n=n/10;
    }
    first=n;
    printf("First %i \n Last %i\n",first,last);
    sum=first+last;
    printf("Sum of first and last digit is %i",sum);
}

void sum_digit_number();
void sum_digit_number()
{
    int n,sum=0;
    printf("Enter N:");
    scanf("%i",&n);
    while(n>0)
    {
        sum=sum+(n%10);
        n=n/10;               //inc or dec
    }
    printf("%i",sum);
}

void product_digit_number();
void product_digit_number()
{
    int n,product=1;
    printf("Enter N:");
    scanf("%i",&n);
    while(n>0)
    {
        product=product*(n%10);
        n=n/10;               //inc or dec
    }
    printf("%i",product);
} 

void reverse_number();
void reverse_number(){
    int n,rev=0;
    printf("Enter Number:");
    scanf("%i",&n);
    while(n>0){
        rev=(rev*10)+(n%10);
        n=n/10;
    }
    printf("Reverse number is %i",rev);
}

void palindrome();
void palindrome()
{
    int n=0,rev=0,num=0;
    printf("Enter Number:");
    scanf("%i",&n);
    num=n;
    while(n>0){
        rev=(rev*10)+(n%10);
        n=n/10;
    }
    if(num == rev)
    {
        printf("Number is Palindrome");
    }
    else
    {
        printf("Number is not Palindrome");
    }
}

void digit_number();
void digit_number()
{
    int num=0,rev=0,n=num,m=(num%10);
    printf("Enter Number:");
    scanf("%i",&num);
    while(num>0)
    {
        rev=(rev*10)+(num%10);
        num=num/10;
    }
    while(num>0)
    {
        switch(m)
        {
            case 0:printf("ZERO ");break;
            case 1:printf("ONE ");break;
            case 2:printf("TWO ");break;
            case 3:printf("THREE ");break;
            case 4:printf("FOUR ");break;
            case 5:printf("FIVE ");break;
            case 6:printf("SIX ");break;
            case 7:printf("SEVEN ");break;
            case 8:printf("NINE ");break;
            case 9:printf("EIGHT ");break;
        }
        rev=rev/10;
    }
}


void ASCII();
void ASCII(){
    int i;
    for(i=0;i<=127;i++)
    {
        printf("\nASCII value %c %i",i,i);
    }
}

void frequency_number();
void frequnecy_number()
{
    int n,count=0,z=0,one=0,d,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
    printf("Enter N:");
    scanf("%i",&n);
    while(n>0)
    {
        
        d=n%10;
        if (d==0)
            z++;
        else if(d==1)
            one++;
        else if(d==2)
            two++;
        else if(d==3)
            three++;
        else if(d==4)
            four++;
        else if(d==5)
            five++;
        else if(d==6)
            six++;
        else if(d==7)
            seven++;
        else if(d==8)
            eight++;
        else if(d==9)
            nine++;
        n=n/10;
    }
    
    printf("\n%i\n%i\n%i\n%i\n%i\n%i\n%i\n%i\n%i\n%i",z,one,two,three,four,five,six,seven,eight,nine);
}


void power_base();
void power_base(){
    int i,power=1,base,exponent;
    printf("Enter Base:");
    scanf("%i",&base);
    printf("Enter Power:");
    scanf("%i",&exponent);
    for(i=1;i<=exponent;i++)
    {
        power=power*base;
    }
    printf("%i * %i = %i",exponent,base,power);
}

void factors_number();
void factors_number(){
    int num, i;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; ++i) {
        if (num % i == 0) {
            printf("%i ", i);
        }
    }
}

void factorial();
void factorial(){
    int n,fact=1;
    printf("Enter Number:");
    scanf("%i",&n);
    fflush(stdin);
    if(n<0)
        printf("Factorial of number is 0");
    else
    {
        for(int i=1;i<=n;i++)
        {
            fact = fact * i;
        }
        printf("Factorial of a number is %i",fact);
    }
}

void HCF_2number();
void HCF_2number(){
    int num1,num2,hcf=1;
    printf("Enter 1st Number:");
    scanf("%i",&num1);
    printf("\nEnter 2nd Number:");
    scanf("%i",&num2);
    for(int i = 1; i <= num1 || i <= num2; i++) {
        if(num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }
    printf("\nHCF of %i and %i is %i",num1,num2,hcf);
}


void prime_check();
void prime_check(){
    int n, i, temp = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    temp = 1;
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            temp = 1;
            break;
        }
    }
    if (temp == 0)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);
}

void prime_1_n();
void prime_1_n(){
    int i,n;
    printf("Enter Value of N(1 to n):");
    scanf("%i",&n);
    
}
void lcm_2_no();
void lcm_2_no()
{
    int a,b;
    printf("\nEnter 2 No : ");
    scanf("%i %i",&a,&b);

    int max=(a>b)?a:b;
    while(1)
    {
        if(max%a==0 && max%b==0)
        {
            printf("LCM of %d and %d =  %d",a,b,max);
            break;
        }
        max++;
    }
}

void freq();
void freq(){
    int no=1223,digit,c=0,rem=0;
    printf("\nEnter digit to be counted:");
    scanf("%i",&digit);
    while(no>0)
    {
        rem=no%10;
        if(rem==digit)
        {
            c++;
        }
        no=no/10;
    }
    printf("\n%d is present %d times",digit,c);
}

void armstrong();
void armstrong(){

}

void 


int main(){
    frequency_number();
}