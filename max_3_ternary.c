#include<stdio.h>
int main(){
    int a,b,c,d;
    a=4;
    b=5;
    c=1;
    d=(a>b && a>c)?a:(b>a && b>c)?b:c;
    printf("%i",d)
}