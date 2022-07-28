#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


void q22();    //doubt   not completely solved
void q22(){
    int i,j,num=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            
                printf("%i",num);
                num++;
                if(num==10)
                    num =1;
        }
        printf("\n");
    }
}

void q28();
void q28()
{
    int j,i,num=1;          
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%i ",num);
            num++;
        }
        
        printf("\n");
    }
}

void q29();
void q29()
{
    int i,j;
    for(i=1;i<=5;i++)    //29
    {
        for(j=1;j<=5;j++)
        {
            if(i%2==0)
                printf("0");
            else
                printf("1");
        }
        
        printf("\n");
    }
}

void q30();
void q30()
{
    int i,j;
    for(i=1;i<=5;i++)   
    {
        for(j=1;j<=5;j++)
        {
            if(j%2==0)
                printf("1");
            else
                printf("0");
        }
        
        printf("\n");
    }
}

void q31();
void q31()
{
    int i,j;
    for(i=1;i<=5;i++)    //31
    {
        for(j=1;j<=5;j++)
        {
            if(i==1 || i==5 ||j==1 || j==5)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
}

void q32();
void q32()
{
    int i,j;
    for(i=1;i<=5;i++)  //32
    {
        for(j=1;j<=5;j++)
        {
            if(i==3 && j==3)
                printf("0");
            else
                printf("1");
        }
        printf("\n");
    }
}

void q33();
void q33()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<5;j++)
        {
            if(i%2!=0)
            {
                if(j%2!=0)
                    printf("1");
                else
                    printf("0");
            }
            else
            {
                if(j%2!=0)
                    printf("0");
                else
                    printf("1");
            }
        }
        printf("\n");
    }
}

void q34();
void q34(){
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==3 || j==3)
                printf("0");
            else
                printf("1");
        }
        printf("\n");
    }
    
}

void q35();     //only half X
void q35(){
    int i,j,k;
    k=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(k==1)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
}

void q36();
void q36()
{
    int i,j;
    for(i=1;i<=5;i++)    //36
    {
        for(j=1;j<=5;j++)
        {
            printf("%i",i);
        }
        printf("\n");
    }
}

void q37();
void q37()
{
    int i,j;
    for(i=1;i<=5;i++)    //37
    {
        for(j=1;j<=5;j++)
        {
            printf("%i",j);
        }
        printf("\n");
    }
}

void q38();
void q38(){
    int i,j,num;
    for(i=1;i<=5;i++)
    {
        
        for(j=1;j<=5;j++)
        {
            
            printf("%i",num);
            num++;
        }
        printf("\n");
        num=i+1;
    }
}

void q39();
void q39()
{
    int i,j,num1=1;
    for(i=1;i<=5;i++)    //39
    {
        for(j=1;j<=5;j++)
        {
            printf("%i ",num1);
            num1++;
        }
        printf("\n");
    }

}



void q51();
void q51(){
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%i",i);
        }
        printf("\n");
    }
}

void q52();
void q52(){
    int j;
    for(int i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        {
            printf(" ");
        }
        for( j=1;j<=i;j++)
        {
            printf("%i",i);
        }
        printf("\n");
    }
}

void q53();
void q53(){
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=6-i;j++)
        {
            printf("%i",(6-i));
        }
        printf("\n");
    }
}

void q54(){
void q54();
    int j;
    for(int i=1;i<=5;i++)
    {
        
        for(j=1;j<=6-i;j++)
        {
            printf("%i",(6-i));
        }
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
    }
}

void q55();
void q55(){
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=(6-i);j++)
        {
            printf("%i",i);
        }
        printf("\n");
    }
}

void q56();
void q56(){
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=(6-i);j++)
        {
            printf("%i",i);
        }
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
    }
}

void q57();
void q57(){
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%i",6-i);
        }
        printf("\n");
    }
}

void q58();
void q58(){
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=(6-i);j>0;j--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%i",(6-i));
        }
        printf("\n");
    }
}

void q59();
void q59(){
    int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<i;j++)
        {
            printf("%i",j);
        }
        printf("\n");
    }
}

void q60();
void q60(){
    int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=(6-i);j>0;j--)
        {
            printf(" ");
        }
        for(j=1;j<i;j++)
        {
            printf("%i",j);
        }
        printf("\n");
    }
}

void q61();
void q61(){
    int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<(7-i);j++)
        {
            printf("%i",j);
        }
        printf("\n");
    }
}

void q62();
void q62(){
    int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<(7-i);j++)
        {
            printf("%i",j);
        }
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
    }
}

void q63();
void q63(){
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%i",j);
        }
        printf("\n");
    }
}

void q64();
void q64(){
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=(6-i);j++)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%i",j);
        }
        printf("\n");
    }
}

void q65();
void q65(){
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%i",j);
        }
        printf("\n");
    }
}

void q66();
void q66(){
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%i",j);
        }
        printf("\n");
        for(j=1;j<=(6-i);j++)
        {
            printf(" ");
        }
    }
}

void q20();
void q20(){
    
}


int main()
{
    q35();
}