#include<stdio.h>
#include<string.h>
void deletevowels();
void deletevowels(){
    char a[50],b[50],temp=0;
    int l;
    printf("Enter String:");
    gets(a);
    l=strlen(a);
    printf("%i",l);
    for(int i=0;i<l;i++)
    {
        if(a[i]=='A' ||a[i]=='a'||a[i]=='E'||a[i]=='e'||a[i]=='I'||a[i]=='i'||a[i]=='O'||a[i]=='o'||a[i]=='U'||a[i]=='u')
        {
            temp++;
        }
        else
        {
            printf("%c",a[i]);
        }
    }
    printf("\n%i vowels deleted",temp);
}


int main(){
    deletevowels();

}