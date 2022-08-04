#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int age[1000],mobile[1000],aadhar[1000],vote[1000];
char name[1000];
int i=0,id;
int counta=0,countb=0,countc=0,countd=0;


void voting();
void voting(){
    do
    {
        int vote;
        printf("\n");
        printf("\nEnter ID:");
        scanf("%i",&id);
        if(id==-1)
        {
            printf("\nHere are Reult of Voting:");
            printf("\nNana Patekar:%i",counta);
            printf("\nJohnny Lever:%i",countb);
            printf("\nRajpal Yadav:%i",countc);
            printf("\nParesh Ravals:%i",countd);
            break;
        }
        system("clear");
        printf("\nEnter Age:");
        scanf("%i",&age[i]);
        if(age[i]<18)
        {
            printf("Sorry! You're Not Eligible For Voting.");
            continue;
        }
        fflush(stdin);
        printf("\nEnter Name:");
        gets(&name[i]);
        printf("\nEnter Your Aadhar Number:");
        scanf("%i",&aadhar[i]);
        printf("\nEnter Mobile Number:");
        scanf("%i",&mobile[i]);
        printf("\nCandidate For Elections Are:");
        printf("\n\t1.Nana Patekar\n\t2.Johnny Lever\n\t3.Rajapl Yadav\n\t4.Paresh Raval");
        printf("\n\nEnter Your Choice:");
        scanf("%i",&vote);
        switch(vote)
        {
            case 1: counta++;break;
            case 2: countb++;break;
            case 3: countc++;break;
            case 4: countd++;break;
        }
        
        i++;
        printf("\nThanks for Voting!!");
        printf("\n");
        system("clear");
    }while(1);
}