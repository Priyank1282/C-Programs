#include<stdio.h>

struct student{
    char name[50];
    int rno,age,grno;
    char div[2];
};


int main(){
    struct student s[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter Name:");
        scanf("%s",s[i].name);
        printf("Enter GR.NO:");
        scanf("%i",&s[i].grno);
        printf("Enter Age:");
        scanf("%i",&s[i].age);
        printf("R.No:");
        scanf("%i",&s[i].rno);
        printf("Enter Div:");
        scanf("%s",s[i].div);
        printf("\n");
    }
    for(int j=0;j<5;j++)
    {
        printf("\nName:%s\nGR.No:%i\nAge:%i\nR.No:%i\nDiv:%s\n",s[j].name,s[j].grno,s[j].age,s[j].rno,s[j].div);
    }
}