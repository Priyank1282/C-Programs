#include<stdio.h>
#include<string.h>
void cpy();
void len();
void cat();
void cmp();
void rev();
void Q1();
void Q2();
void Q3();
void Q4();
void Q5();
int main()
{
    Q4();	
}
void len()
{
	char a[20], b[20];
	printf("Enter String: ");
	scanf("%s",a);
	printf("%s",a);
	printf("\n%d",strlen(a));
}
void cpy()
{
	char b[20],c[20];
	printf("Enter String: ");
	scanf("%s",b);
	strcpy(c,b);
	printf("%s",c);
}

void cat()
{
	char x[40],y[40];
	printf("Enter String: ");
	scanf("%s",x);
	printf("Enter String: ");
	scanf("%s",y);
	strcat(x,y);
	printf("%s",x);
	
}

void cmp()
{
	char x[40],y[40];
	int d;
	printf("Enter String: ");
	scanf("%s",x);
	printf("Enter String: ");
	scanf("%s",y);
	d=strcmp(x,y);
	printf("%d",d);
}
void rev()
{
	char x[40];
	printf("Enter String: ");
	scanf("%s",x);
	strrev(x);
	printf("%s",x);
	
}

void Q1()
{
	char x[15];
	printf("Enter String: ");
	scanf("%s",x);
	int l=strlen(x);
	for(int i=0;i<l;i++)
	{
		printf("\n%d = %c",x[i],x[i]);
	}
	
}

void Q2()
{
    char str[25];
    int i;

    printf("Enter the string:");
    scanf("%s",str);
    for(i=0;i<=strlen(str);i++)
    {
        if(str[i]>=97&&str[i]<=122)
            str[i]=str[i]-32;
    }
    printf("\nUpper Case String is: %s",str);	
}

void Q3()
{
	char str[25];
    int i;
    printf("Enter the string: ");
    scanf("%s",str);
    for(i=0;i<=strlen(str);i++)
    {
        if(str[i]>=65&&str[i]<=90)
            str[i]=str[i]+32;
    }
    printf("\nLower Case String is: %s",str);

}
void Q4()
{
	/* string length*/
	char a[20], b[20];
	printf("Enter String: ");
	scanf("%s",a);
	printf("%s",a);
	printf("\n%d",strlen(a));

}

Void Q5()
{
		
}