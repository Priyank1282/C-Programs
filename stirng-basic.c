#include<stdio.h>
#include<string.h>

void q1();
void q1(){
    char a[25];
    printf("Enter String:");
    scanf("%s",a);
    int l=strlen(a);
    for(int i=0;i<l;i++)
    {
        printf("%d = %c",a[i],a[i]);
        printf("\n");
    }
}

void q2();
void q2(){
    char a[25];
    printf("Enter String in LowerCase:");
    scanf("%s",a);
    int l=strlen(a);
    for(int i=0;i<l;i++)
    {
        if(a[i]>=97&&a[i]<=122)
            a[i]=a[i]-32;
    }
    printf("%s\n",a);
}

void q3();
void q3(){
    char a[25];
    printf("Enter String in UpperCase:");
    scanf("%s",a);
    int l=strlen(a);
    for(int i=0;i<l;i++)
    {
        if(a[i]>=65&&a[i]<=90)
            a[i]=a[i]+32;
    }
    printf("%s\n",a);
}

void q4();
void q4(){
    char a[10];
    printf("Enter String:");
    scanf("%s",a);
    int l=strlen(a);
    printf("Length Of String is %i",l);
}

void q6();
void q6(){
    char a[25],p=0;
    printf("Enter String:");
    scanf("%s",a);
    int l=strlen(a);
    for(int i=0;i<l;i++)
    {
        if(a[i]>=32 && a[i]<=47 ||a[i]>=58 && a[i]<=64 ||a[i]>=91 && a[i]<=96 ||a[i]>=123 && a[i]<=126)
            p++;
    }
    printf("Number of Punctations in string is %i",p);
}

void q7();
void q7(){
    char a;
    printf("Enter String:");
    scanf("%c",&a);
    if(a>=97 && a<=122)
        printf("Lower Case.");
    else
        printf("Not Lower Case");
}

void q8();
void q8(){
    char a;
    printf("Enter Caracter:");
    scanf("%c",&a);
    if(c>=)
}

void q10();
void q10(){
    char a[25],c,b=0;
    printf("Enter String:");
    scanf("%s",a);
    printf("Enter Char to be searched:");
    fflush(stdin);
    scanf("%c",&c);
    int l=strlen(a);
    for(int i=0;i<l;i++)
    {
        if(a[i]==c)
            b++;
    }
    printf("%c occur %i times",c,b);
}


int main(){
    q7();
}