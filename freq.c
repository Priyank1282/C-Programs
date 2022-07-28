#include<stdio.h>
int main(){
    long n;
    int z,one,two,three,four,five,six,seven,eight,nine,d;
    z=one=two=three=four=five=six=seven=eight=nine=0;
    printf("Enter N:");
    scanf("%ld",&n);
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
    printf("\n0 - %d times",z);
    printf("\n1 - %d times",one);
    printf("\n2 - %d times",two);
    printf("\n3 - %d times",three);
    printf("\n4 - %d times",four);
    printf("\n5 - %d times",five);
    printf("\n6 - %d times",six);
    printf("\n7 - %d times",seven);
    printf("\n8 - %d times",eight);
    printf("\n9 - %d times",nine);
}
