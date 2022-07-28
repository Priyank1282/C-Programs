#include<stdio.h>
int main(){
    int g;
    g=56;
    char d=(g>=81 && g<=100)?'a':(g>=61 && g<=80)?'b':(g>=41 && g<=60)?'c':'d';
    printf("%c",d);
}                     