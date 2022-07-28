#include<stdio.h>
#include<stdlib.h>           //for clear screen


void report_card();
void report_card(){
    char s_name[25],grade;
    int gr_no;
    float m1,m2,m3,m4,m5,total,percentage;
    printf("\n\t****************************\n");
    printf("\n\tHello Welcome to ABC School!");
    printf("\n\t****************************\n");
    printf("\n\tPlease enter name of student:");
    scanf("%[^\n]s",s_name);         //to get full name with spaces
    printf("\n\tEnter G.R No:");
    scanf("%i",&gr_no);
    printf("\n\tEnter Marks of:");
    printf("\n\t\tPhysics:");
    scanf("%f",&m1);
    printf("\n\t\tChemistry:");
    scanf("%f",&m2);
    printf("\n\t\tMaths:");
    scanf("%f",&m3);
    printf("\n\t\tComputer:");
    scanf("%f",&m4);
    printf("\n\t\tEnglish:");
    scanf("%f",&m5);
    total =(m1+m2+m3+m4+m5);
    percentage= total/5;
    if(percentage>=81 && percentage<=100)
    {
        grade = 'A';
    }
    else if(percentage>=61 && percentage<=80)
    {
        grade = 'B';
    }
    else if(percentage>=41 && percentage<=60)
    {
        grade = 'C';
    }
    else if(percentage>=33 && percentage<=40)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }
    system("clear");  //clear screen
    printf("\n\t\tName:%s\n",s_name);
    printf("\n\t****************Report Card******************\n");         
    printf("\n\t\tPhysics:%.1f\n",m1);
    printf("\n\t\tChemistry:%.1f\n",m2);
    printf("\n\t\tMaths:%.1f\n",m3);
    printf("\n\t\tComputer:%.1f\n",m4);
    printf("\n\t\tEnglish:%.1f\n",m4);
    printf("\n\t**********************************************\n"); 
    printf("\n\t\tTotal Marks:%.1f\n",total);
    printf("\n\t\tPercentage:%.2f\n",percentage);
    printf("\n\t\tGrade:%c\n",grade);
    printf("\n\t**********************************************\n"); 

}

int main(){
    report_card();
}