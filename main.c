#include"evm.h"


int main(){
    char password[25];
    printf("*********Welcome to EVM*********");
    printf("\nHello, Priyank");
    for(int j=3;j>0;j--)
    {
        printf("\nEnter Password(you've %i attempt):",j);
        scanf("%s",password);
        if(strcmp(password,"priyank1282") == 0)
        {
            voting();
            break;
        }
        else
        {
            printf("Wrong Password!! Try Again..\n");
            continue;
        }
    }
    printf("\n");
}