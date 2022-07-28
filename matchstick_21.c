#include<stdio.h>
#include<stdlib.h>

int main()
{
    int matchstick,userchoice,computer_choice;
    
    for(matchstick=21;matchstick>=1;)
    {
        printf("\nEnter Choice(1,2,3,4):");
        scanf("%i",&userchoice);
        if(userchoice>4 || userchoice<1)
        {
            printf("Sorry Invalid Input.\n");
            break;
        }
        computer_choice=5-userchoice;
        printf("\nComputer choose %i matchstick\n",computer_choice);
        matchstick=matchstick-userchoice-computer_choice;
        printf("\nMatchstick left = %i",matchstick);
        if(matchstick==1)
        {
            printf("\n\tSorry you Lost\n");
            break;
        }
    }
}