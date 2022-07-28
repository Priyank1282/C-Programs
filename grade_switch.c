#include<stdio.h>
int main(){
    int a;
    printf("Enter Percantage:");
    scanf("%i",&a);
    switch(a/10)
    {
        case 10:
        case 9:
        case 8:printf("Grade A");break;
        case 7:
        case 6:printf("Grade B");break;
        case 5:
        case 4:printf("Grade C");break;
        case 3:printf("Grade D");break;
        default:printf("\nFail\n");break;

    }
}