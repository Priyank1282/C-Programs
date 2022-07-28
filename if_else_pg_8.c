#include<stdio.h>
#include<math.h>
void max_2();
void max_2(){
    int a ,b;
    printf("Enter 2 numbers:");
    scanf("%i %i",&a,&b);
    if(a>b)
        printf("%i is bigger than %i",a,b);
    else if(a<b)
        printf("%i is bigger than %i",a,b);
    else
        printf("Both are equal.");
}

void max_3();
void max_3(){
    int a,b,c;
    printf("Enter 3 numbers:");
    scanf("%i %i %i",&a,&b,&c);
    if (a>b && a>c)
        printf("%i is bigger than %i and %i",a,b,c);
    else if (b>a && b>c)
        printf("%i is bigger than %i and %i",b,a,c);
    else
        printf("%i is bigger than %i and %i",c,a,b);
}

void pos_neg();
void pos_neg(){
    int a;
    printf("Enter a number :");
    scanf("%i",&a);
    if (a>0)
        printf("Number is positive");
    else if(a<0)
        printf("Number is Negative");
    else
        printf("Numeber is 0");
}

void div5_11();
void div5_11(){
    int a;
    printf("Enter a number:");
    scanf("%i",&a);
    if(a%5==0 && a%11==0)
    {
        printf("Entered number is divisible by 5 and 11");
    }
    else{
        printf("Entered number is  not divisible by 5 and 11");
    }
}

void even_odd();
void even_odd(){
    int a;
    printf("Enter a number:");
    scanf("%i",&a);
    if (a%2==0)
    {
        printf("entered number is even.");
    }
    else
    {
        printf("entered number is odd");
    }
}


void leap();
void leap(){
    int a;
    printf("Enter year:");
    scanf("%i",&a);
    if (a%400 ==0 || a%40==0)
    {
        printf("%i is a leap year",a);
    }
    
    else if(a%100==0)
    {
        printf("%i is not a leap year",a);
    }
    else{
        printf("%i is not a leap year",a);
    }
}

void alpha();
void alpha()
{
    char ch;
    printf("Enter anything:");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
        printf("alphabet");
    else if(ch>='A' && ch<='Z')
        printf("Aplhabet");
    else
        printf("Not a Alphabet");
}


void vowel_consonant();
void vowel_consonant()
{
    char c;
    printf("Enter Character:");
    scanf("%c",&c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' )
    {
        printf("enterd character is vowel");
    }
    else{
        printf("entered character is consonant");
    }
}

void alpha_digi_special();
void alpha_digi_specail()
{
    char ch;
    printf("Enter anything:");
    scanf("%c",&ch);
    if ((ch>='a' && ch<='z')|| (ch>='A' && ch<='Z'))
        printf("Alphabet");
    else if(ch>='0' && ch<='9')
        printf("Digit");
    else
        printf("Special Character");
}


void upper_lower();
void upper_lower(){
    char ch;
    printf("Enter Alphabet:");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
        printf("Lower Case Alphabet");
    else if(ch>='A' && ch<='Z')
        printf("Upper Case Aplhabet");
    else
        printf("Invalid Input");
}

void week_num();
void week_num(){
    int w;
    printf("Enter week number:");
    scanf("%i",&w);
    if(w==1)
        printf("Monday");
    else if(w==2)
        printf("Tuesday");
    else if(w==3)
        printf("Wednesday");
    else if(w==4)
        printf("Thursday");
    else if(w==5)
        printf("Friday");
    else if(w==6)
        printf("Saturday");
    else if(w==7)
        printf("Sunday");
    else
        printf("Invalid input");
}


void month_days();
void month_days(){
    int m;
    printf("Enter month number:");
    scanf("%i",&m);
    if (m==1)
        printf("31 Days");
    else if(m==2)
        printf("28 or 29 days");
    else if(m==3)
        printf("31 days");
    else if(m==4)
        printf("30 days");
    else if(m==5)
        printf("31 days");
    else if(m==6)
        printf("30 days");
    else if(m==7)
        printf("31 days");
    else if(m==8)
        printf("31 days");
    else if(m==9)
        printf("30 days");
    else if(m==10)
        printf("31 days");
    else if(m==11)
        printf("30 days");
    else if(m==12)
        printf("31 days");
}


void notes();
void notes()
{
    int n2000,n500,n200,n100,n50,n20,n10,amt;
    printf("Enter ammount:");
    scanf("%i",&amt);
    if(amt>=2000)
    {
        n2000=amt/2000;
        amt=amt%2000;
        printf("\n%i",n2000);
    }
    if(amt>=500)
    {
        n500=amt/500;
        amt=amt%500;
        printf("\n%i",n500);
    }
    if(amt>=200)
    {
        n200=amt/200;
        amt=amt%200;
        printf("\n%i",n200);
    }
    if(amt>=100)
    {
        n100=amt/100;
        amt=amt%100;
        printf("\n%i",n100);
    }
    if(amt>=50)
    {
        n50=amt/50;
        amt=amt%50;
        printf("\n%i",n50);
    }
    if(amt>=20)
    {
        n20=amt/20;
        amt=amt%20;
        printf("\n%i",n20);
    }
    if(amt>=10)
    {
        n10=amt/10;
        amt=amt%10;
        printf("\n%i",n10);
    }
}


void tri_angle();
void tri_angle()
{
    int a1,a2,a3,total;
    printf("Enter Angle of Triangle:");
    scanf("%i %i %i",&a1,&a2,&a3);
    total=a1+a2+a3;
    if(total==180 && a1>0 && a2>0 && a3>0)
        printf("Valid Trianlge");
    else
        printf("Invalid Triangle");
}


void tir_side();
void tri_side(){
    int s1,s2,s3,a,b,c;
    printf("Enter Sides of triangle:");
    scanf("%i %i %i",&s1,&s2,&s3);
    a=s1+s2;
    b=s2+s3;
    c=s3+s1;
    if(a>s3 && b>s1 && c>s2)
        printf("Triangle is Valid!");
    else
        printf("Triangle is not valid.");
}


void type_trianlge();
void type_triangle()
{
    int s1,s2,s3;
    printf("Enter sides of triangle:");
    scanf("%i %i %i",&s1,&s2,&s3);
    if(s1==s2 && s2==s3)
        printf("Equilateral Triangle");
    else if(s1==s2 || s2==s3 || s1==s3)
        printf("Isosceles Triangle");
    else
    {
        printf("Scalence triangle");
    }
}

void root_quad();
void root_quad()
{
    float a,b,c,r1,r2,d;
    printf("Enter valus of A,B,C:");
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d)/(2*a));
        printf("Real Roots %.1f ,%.1f",r1,r2);
    }
    else if(d==0){
        r1=(-b/(2*a));
        r2=(-b/(2*a));
        printf("Equal roots: %.1f , %.1f",r1,r2);
    }
    else
    {
        printf("Roots are imaginary.");
    }
}

void profit_loss();
void profit_loss(){
    int ammount,sales;
    printf("Enter Investemt Ammount:");
    scanf("%i",&ammount);
    printf("Enter Sales:");
    scanf("%i",&sales);
    if(ammount>sales)
        printf("loss");
    else if(sales>ammount)
        printf("Profit");
    else
        printf("Neither loss nor profit");
}

void grade();
void grade()
{
    int m1,m2,m3,m4,m5,total,percentage;
    char grade;
    printf("Enter Marks of Physics(out of 100):");
    scanf("%i",&m1);
    printf("Enter Marks of Chemistry(out of 100):");
    scanf("%i",&m2);
    printf("Enter Marks of Biology(out of 100):");
    scanf("%i",&m3);
    printf("Enter Marks of Maths(out of 100):");
    scanf("%i",&m4);
    printf("Enter Marks of Computer(out of 100):");
    scanf("%i",&m5);
    total=m1+m2+m3+m4+m5;
    percentage=total/5;
    if(percentage>=90 && percentage<=100)
    {
        grade = 'A';
    }
    else if(percentage>=80 && percentage<=89)
    {
        grade = 'B';
    }
    else if(percentage>=70 && percentage<=79)
    {
        grade = 'C';
    }
    else if(percentage>=60 && percentage<=69)
    {
        grade = 'D';
    }
    else if (percentage>= 40 && percentage<=59)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }
    printf("%c",grade);
}


void salary();
void salary()
{
    int bs;
    float gs;
    printf("Enter Basic Salary:");
    scanf("%i",&bs);
    if(bs<=10000 && bs>0)
    {
        gs=bs+((bs*0.2)+(bs*0.80));
    }
    else if(bs<=20000 && bs>10000)
    {
        gs=bs+((bs*0.25)+(bs*0.90));
    }
    else if(bs>2000)
    {
        gs=bs+((bs*0.30)+(bs*0.95));
    }
    else
        printf("Invalid Input");
    printf("Gross Salary:%f",gs);
}



void ele_bill();
void ele_bill(){
    float amt=0, total,units;
    printf ("Enter number of units: ");
    scanf ("%f" ,&units) ;
    if(units>0 && units<=50)
    {
        amt=amt+(units*0.50);
        total=amt+ (0.2* amt) ;
    }

    else if (units>50 && units<=150)
    {
        amt=amt+(((units-50) *0.75) + (50*0.50)) ;
        total=amt+ (0.2*amt) ;
    }

    else if (units>150 && units<=250)
    {
        amt=amt+ (((units-150)*1.20) + (50*0.50) + (100*0.75));
        total=amt+ (0.2*amt) ;
    }

    else if (units>250)
    {
        amt=amt+ (((units-250) *1.50) + (50*0.50) + (100*0.75) + (100*1.250));
        total=amt+ (0.2*amt) ;
    }
    else
    {
        printf ("Invalid Value");
    }
    printf("%.1f\n",amt);
    printf("%.1f",total);
}




int main()
{
    alpha();
}