#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    char class[20];
    int fail_subjects;
    printf("\nEnter your class(first,second,third):");
    gets(class);
    printf("\nEnter no of subjects you've failed:");
    scanf("%i",&fail_subjects);
    if(strcmp(class,"first")==0)
    {
        if(fail_subjects>3)
        {
            printf("\nno grace marks");
        }
        else
        {
            printf("\n5 grace marks");
        }
    }
    else if(strcmp(class,"second")==0)
    {
        if(fail_subjects>2)
            printf("\nNo grace marks");
        else
            printf("\nyou will get 4 marks (per subject) as grace");
    }
    else if(strcmp(class,"third")==0)
    {
        if(fail_subjects>1)
            printf("\nno grace marks");
        else
            printf("\n5 grace marks");
    }
    else
        printf("\nInvalid Input");
}