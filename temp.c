#include<stdio.h>
#include<string.h>
int main(){
    // char str1[10];
    // printf("Enter String:");
    // gets(str1);
    // //printf("%s",str1);
    // int i,k,l=strlen(str1);
    // for(i=0;i<=l;i++)
    // {
    //     for(k=0;k<i;k++)
    //     {
            
    //         printf("%c",str1[k]);
            
    //     }
    //     printf("\n");
    // }
    char str[]="123456789";
    int i,j,k,l;
    for(i=0;i<5;i++)
    {
        for(k=4;k>i;k--)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
     
}