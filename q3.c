#include<stdio.h>

struct student{
    char name[50];
    int rno,age,grno;
    char div[2];
};


int main(){
    struct student s;
    printf("Enter Name:");
    scanf("%s",s.name);
    printf("\nEnter GR.NO:");
    scanf("%i",&s.grno);
    printf("\nEnter Age:");
    scanf("%i",&s.age);
    printf("\nR.No:");
    scanf("%i",&s.rno);
    printf("\nEnter Div:");
    scanf("%s",s.div);

    printf("\nName:%s\nGR.No:%i\nAge:%i\nR.No:%i\nDiv:%s\n",s.name,s.grno,s.age,s.rno,s.div);
}