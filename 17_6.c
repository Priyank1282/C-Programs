#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

void positive_negative();
void positive_negative(){
    int n;
    printf("Enter Number:");
    scanf("%i",&n);
    if(n>0)
    {
        printf("Entered number is positive");
    }
    else if(n<0)
    {
        printf("Entered number is negative");
    }
}

void check_negative();
void check_negative(){
    int n;
    printf("Enter number:");
    scanf("%i",&n);
    if(n<0)
        printf("Enterd number is negative");
}

void max_3();
void max_3(){
    int a,b,c;
    printf("Enter 3 numbers:");
    scanf("%i %i %i",&a,&b,&c);
    if(a>b && a>c)
        printf("%i is Greater than %i %i",a,b,c);
    else if(b>c && b>a)
        printf("%i is Greater than %i %i",b,c,a);
    else if(c>a && c>b)
        printf("%i is Greater than %i %i",c,a,b);
}

void leap_year();
void leap_year()
{
    int year;
    printf("Enter Year:");
    scanf("%i",&year);
    if(year%4==0)
        printf("%i is a leap year",year);
    else   
        printf("%i is not a leap year",year);
}

void calculator_switch();
void calculator_switch(){
    int a,b,ans=0;
    char ch;
    printf("\nEnter 2 Operands:");
    scanf("%i %i",&a,&b);
    printf("\nEnter Operator(+,-,*,/):");
    fflush(stdin);
    scanf("%c",&ch);
    switch (ch)
    {
    case '+':ans=a+b; break;
    case '-':ans=a-b; break;
    case '*':ans=a*b; break;
    case '/':ans=a/b; break;
    default: printf("Invalid Input"); break;
    }
    printf("%i %c %i = %i",a,ch,b,ans);
}

void loop_1_5();
void loop_1_5(){
    for(int i=1;i<=5;i++)
    {
        printf("\n%i",i);
    }
}

void loop_1_10();
void loop_1_10(){
    for(int i=1;i<=10;i++)
    {
        printf("\n%i",i);
    }
}

void for_sum_1_n();
void for_sum_1_n(){
    int n,sum=0;
    printf("Enter N:");
    scanf("%i",&n);
    for (int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum of 1 to %i is %i",n,sum);
}

void while_sum_1_n();
void while_sum_1_n(){
    int i=1,sum=0,n;
    printf("Enter N:");
    scanf("%i",&n);
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("sum from 1 to %i is %i",n,sum);
}

// void power_number();
// void power_number(){
//     int n,result=1;
//     printf("Enter Base:");
//     scanf("%i",&base);
//     printf("Enter Power:");
//     scanf("%i",&power);
//     for (power; power>0; power--)
//     {
//         result = result * base;
//     }
//     printf("");

// }

void sum_till_0();
void sum_till_0(){
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

void rev_no_while();
void rev_no_while(){
    int rev=0,n;
    printf("Enter N:");
    scanf("%i",&n);
    while(n>0)
    {
        rev=(rev*10)+(n%10);
        n=n/10;
    }
    printf("Reverse Number is %i",rev);
}

void palindrome();
void palindrome(){
    int rev=0,n;
    printf("Enter N:");
    scanf("%i",&n);
    int d=n;
    while(n>0)
    {
        rev=(rev*10)+(n%10);
        n=n/10;
    }
    if(rev==d)
    {
        printf("Number Is Palindrome");
    }
    else
        printf("Number is Not Palindrome");
}

void prime_check();
void prime_check(){
    int n,c=0;
    printf("Enter Number :");
    scanf("%i",&n);
    for(int i=1;i<=n;i++)
    {
        if (n%i==0)
            c++;
    }
    if(c==2)
        printf("Prime Number");
    else    
        printf("Not Prime");
}

void prime_in_range();
void prime_in_range(){
    int n,c,sum=0;
    printf("Enter End Range :");
    scanf("%i",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if (i%j==0)
                c++;
        }
        if (c==2)
            sum=sum+i;
        c=0;
    }
    printf("Sum of prime number till %i is %i",n,sum);
}

void even_1_10();
void even_1_10(){
    for(int i=1;i<=10;i++)
    {
        if(i%2==0)
            printf("\n%i",i);
    }
}

void sum_of_digits();
void sum_of_digits(){
    int n,sum=0;
    printf("Enter N:");
    scanf("%i",&n);
    while(n>0)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    printf("Sum of Digits is %i",sum);
}

void product_of_digits();
void product_of_digits(){
    int n,product=1;
    printf("Enter N:");
    scanf("%i",&n);
    while(n>0)
    {
        product=product*(n%10);
        n=n/10;
    }
    printf("Product of Digits is %i",product);
}

void not_divi_2_3();
void not_divi_2_3(){
    int c=0;
    for(int i=1;i<=100;i++)
    {
        if(i%2==0 || i%3==0)
        {
            printf("\n%i is divisible by 2 or 3",i);
            c++;
        }
    }
    printf("\nThere are %i numbers which are divisible by 2 or 3",c);
}

void int2_check();
void int2_check(){
    int a,b;
    printf("Enter 1st Integer:");
    scanf("%i",&a);
    printf("Enter 2nd Integer:");
    scanf("%i",&b);
    if(a==b)
        printf("Enterd Integers are Equal");
    else
        printf("Not Equal");
}

void voting_age();
void voting_age(){
    int age;
    printf("Enter Age:");
    scanf("%i",&age);
    if(age>18)
        printf("You are Eligible for Voting");
    else    
        printf("Not Eligible for Voiting");
}

// void digit_word();
// void digit_word()
// {
//     int num=0,rev,n=num,m=(num%10);
//     printf("Enter Number:");
//     scanf("%i",&num);
//     while(num>0)
//     {
//         rev=(rev*10)+(num%10);
//         num=num/10;
//     }
//     while(num>0)
//     {
//         switch(m)
//         {
//             case 0:printf("ZERO ");break;
//             case 1:printf("ONE ");break;
//             case 2:printf("TWO ");break;
//             case 3:printf("THREE ");break;
//             case 4:printf("FOUR ");break;
//             case 5:printf("FIVE ");break;
//             case 6:printf("SIX ");break;
//             case 7:printf("SEVEN ");break;
//             case 8:printf("NINE ");break;
//             case 9:printf("EIGHT ");break;
//         }
//         rev=rev/10;
//     }
// }

void alphabet_special();
void alphabet_special(){
    char ch;
    printf("Enter Value:");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
        printf("Alphabet");
    else if(ch>='0' && ch<='9')
        printf("Number");
    else    
        printf("Special Character");
}

void vowel_consonent();
void vowel_consonent(){
    char ch;
    printf("Enter Character:");
    scanf("%c",&ch);
    fflush(stdin);
    switch (ch)
    {
        case 'a':printf("vowel");break;
        case 'e':printf("vowel");break;
        case 'i':printf("vowel");break;
        case 'o':printf("vowel");break;
        case 'u':printf("vowel");break;
        default:printf("consonent");
    }
}

void profit_loss();
void profit_loss(){
    int investment,return1;
    printf("Enter ammount you've invested:");
    scanf("%i",&investment);
    printf("Enter Return:");
    scanf("%i",&return1);
    if(return1>investment)
        printf("Profit");
    else if(investment>return1)
        printf("Loss");
    else    
        printf("Neither Profit nor LOss");
}



void area_menu();
void area_menu()
{
    int n,l,b,r,b1,h;
    printf("\t1.circle\n\t2.Rectangle\n\t3.Triangle\nChoose Your Option:");
    scanf("%i",&n);
    switch(n)
    {
        case 1: 
            system("clear");
            printf("Enter radius:");
            scanf("%i",&r);
            printf("Area of circle is %f",(3.14*r*r));
            break;
        case 2:
            system("clear");
            printf("Enter Length:");
            scanf("%i",&l);
            printf("Enter Breadth:");
            scanf("%i",&b);
            printf("Area of rectangel is %i",(l*b));
            break;
        case 3: 
            system("clear");
            printf("Enter Base:");
            scanf("%i",&b1);
            printf("Enter Height:");
            scanf("%i",&h);
            printf("Area of Triangle is %f",(0.5*b1*h));
            break;
        default:printf("Invalid Input");
    }
}

void week_name();
void week_name(){
    int w;
    printf("Enter day of week: ");
    scanf("%i",&w);
    switch(w)
    {
        case 1:printf("Monday");break;
        case 2:printf("Tuesday");break;
        case 3:printf("Wednesday");break;
        case 4:printf("Thursday");break;
        case 5:printf("Friday");break;
        case 6:printf("Saturday");break;
        case 7:printf("Sunday");break;
    }
}


void days_month();
void days_month()
{
    int m;
    printf("Enter No of Month:");
    scanf("%i",&m);
    switch(m)
    {
        case 1:printf("31º Days");break;
        case 2:printf("28 or 29 Days");break;
        case 3:printf("31 Days");break;
        case 4:printf("30 Days");break;
        case 5:printf("31 Days");break;
        case 6:printf("30 Days");break;
        case 7:printf("31 Days");break;
        case 8:printf("31 Days");break;
        case 9:printf("30 Days");break;
        case 10:printf("31 Days");break;
        case 11:printf("30 Days");break;
        case 12:printf("31 Days");break;
    }
}

void sin_deg();
void sin_deg(){
    int n=90;
    printf("sin of %iº is %f",n,sin(n*59.3));
}

int main(){
    sin_deg();
}