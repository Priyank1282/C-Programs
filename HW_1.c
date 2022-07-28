#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//menu driven porgram
//1.odd or even
//2.vowel or consonent
//3. aplhabet,digit,special char
//4.exit

void odd_even();      //odd even
void odd_even(){
    int n;
    printf("Enter Number:");
    scanf("%i",&n);
    if(n%2==0)
        printf("Number is even.");
    else
        printf("Number is odd");
}

void vowel_consonent();
void vowel_consonent()     
{
    char ch;
    printf("Enter Alphabet:");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        printf("Entered aplhabet is Vowel");
    else
        printf("Enterd alphabet is Consonet");
}

void alpha_digit_special();
void alpha_digit_special()
{
    char ch;
    printf("Enter anything:");
    fflush(stdin);
    scanf("%c",&ch);
    if ((ch>='a' && ch<='z')|| (ch>='A' && ch<='Z'))
        printf("Alphabet");
    else if(ch>='0' && ch<='9')
        printf("Digit");
    else
        printf("Special Character");
}

int main()
{
    int option;
    printf("\n1.Check number is Odd or Even");
    printf("\n2.Check alphabet is Vowel or Consonent");
    printf("\n3.Check enterd value is alphabet,digit or special character");
    printf("\n4.Exit");
    printf("\n\nEnter you choice:");
    scanf("%i",&option);
    system("clear");
    switch (option)
    {
    case 1:system("clear"); odd_even(); break;
    case 2:system("clear"); vowel_consonent(); break;
    case 3:system("clear"); alpha_digit_special(); break;
    case 4: break;
    default: printf("Incorrect Value");
    }
}