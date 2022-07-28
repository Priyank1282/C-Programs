#include<stdio.h>
#include<math.h>

//que-1
void  max_2();
void max_2(){
    int a,b;
    printf("Enter Value of A,B:");
    scanf("%i %i",&a,&b);
    if(a>b)
    {
        printf("%i is bigger than %i",a,b);
    }
    else if(b>a)
    {
        printf("%i is bigger than %i",b,a);
    }
    else{
        printf("both input are equal ");
    }
}


void max_3();
void max_3(){
    int a,b,c;
    printf("Enter Value of A,B,C:");
    scanf("%i %i %i",&a,&b,&c);
    if (a>b && b>c)
    {
        printf("%i is greater than %i and %i",a,b,c);
    }
    else if(b>a && b>c)
    {
        printf("%i is greater than %i and %i",b,a,c);
    }
    else{
        printf("%i is greater thann %i and %i",c,a,b);
    }
}

void positive_negative();
void positive_negative(){
    int a;
    printf("Enter number:");
    scanf("%i",&a);
    if(a>0)
    {
        printf("entered number is positive.");
    }
    else if(a<0)
    {
        printf("entered number is negative.");
    }
    else{
        printf("Entered number is 0");
    }
}


void div5_11();
void div5_11(){
    int a;
    printf("Enter a number:");
    scanf("%i",&a);
    if(a%5==0 && a%11==0)
    {
        printf("Entered number is divisible by 5 and 11");
    }
    else{
        printf("Entered number is  not divisible by 5 and 11");
    }
}

void even_odd();
void even_odd(){
    int a;
    printf("Enter a number:");
    scanf("%i",&a);
    if (a%2==0)
    {
        printf("entered number is even.");
    }
    else
    {
        printf("entered number is odd");
    }
}


void leap();
void leap(){
    int a;
    printf("Enter year:");
    scanf("%i",&a);
    if (a%400 ==0 || a%40==0)
    {
        printf("%i is a leap year",a);
    }
    
    else if(a%100==0)
    {
        printf("%i is not a leap year",a);
    }
    else{
        printf("%i is not a leap year",a);
    }
}


void vowel_consonant();
void vowel_consonant()
{
    char c;
    printf("Enter Character:");
    scanf("%c",&c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' )
    {
        printf("enterd character is vowel");
    }
    else{
        printf("entered character is consonant");
    }
}

int main(){
    vowel_consonant();
}