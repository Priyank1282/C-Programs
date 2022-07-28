#include<stdio.h>
#include<math.h>


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
        case 1:printf("31 Days");break;
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

void con_vowel();
void con_vowel()
{
    char ch;
    printf("Enter Alphabet:");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':printf("Vowel");break;
        default:printf("Consonent");break;
    }
}

void max_2();
void max_2()
{
    int a,b;
    printf("Enter 2 numbers:");
    scanf("%i %i",&a,&b);
    switch(a>b)
    {
        case 1:printf("%i is bigger than %i",a,b);
        case 0:printf("%i is bigger than %i",b,a);
    }
}



void even_odd();
void even_odd()
{
    int a;
    printf("Enter number:");
    scanf("%i",&a);
    switch((a%2)==0)
    {
        case 1:printf("number is even");break;
        case 0:printf("number is odd");break;
    }
}

void pos_neg_0();
void pos_neg_0()
{
    int a;
    printf("Enter number:");
    scanf("%i",&a);
    switch(a>0)
    {
        case 1:printf("Number is positive");break;
        case 0: if(a<0)
                printf("Number is negative");
                else
                printf("Number is Zero");
                break;
        
        default:printf("Invalid");break;
    }
}


void quad();
void quad(){
    float a,b,c,r1,r2,d;
    printf("Enter value of a,b,c:");
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    switch(d>0)
    {
        case 1:r1=(-b+sqrt(d))/(2*a);
            r1=(-b+sqrt(d))/(2*a);
            printf("Real Roots %.1f %.1f",r1,r2);
        
        case 0:if(d==0){
            r1=(-b/(2*a));
            printf("Equal roots %.1f %.1f ",r1,r1);
        }
        else{
            printf("Roots are Imaginary");
        }
    }
}

void calc();
void calc(){
    int a,b,c;
    char ch;
    printf("Enter 2 number:");
    scanf("%i %i",&a,&b);
    fflush(stdin);
    printf("Enter operator:");
    scanf("%c",&ch);
    switch(ch)
    {
        case '+':printf("Addtion :%i",a+b);break;
        case '-':printf("Substraction: %i",a-b);break;
        case '*':printf("Multiplication: %i",a*b);break;
        case '/':printf("Quotient:%i",a/b);
    }
}

int main()
{
    calc();
}