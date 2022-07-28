#include<stdio.h>

//calculate currency notes 2000,500,200,100,50,20,10

int main(){
    int n2000,n500,n200,n100,n50,n20,n10,amt;
    printf("Enter ammount:");
    scanf("%i",&amt);
    if(amt>=2000)
    {
        n2000=amt/2000;
        amt=amt%2000;
        printf("\n%i",n2000);
    }
    if(amt>=500)
    {
        n500=amt/500;
        amt=amt%500;
        printf("\n%i",n500);
    }
    if(amt>=200)
    {
        n200=amt/200;
        amt=amt%200;
        printf("\n%i",n200);
    }
    if(amt>=100)
    {
        n100=amt/100;
        amt=amt%100;
        printf("\n%i",n100);
    }
    if(amt>=50)
    {
        n50=amt/50;
        amt=amt%50;
        printf("\n%i",n50);
    }
    if(amt>=20)
    {
        n20=amt/20;
        amt=amt%20;
        printf("\n%i",n20);
    }
    if(amt>=10)
    {
        n10=amt/10;
        amt=amt%10;
        printf("\n%i",n10);
    }
}