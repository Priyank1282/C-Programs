#include<stdio.h>
#include<math.h>
#define pi 3.14
//basics.pdf
//beginer level
//no argument no return (type-1)


void welcome();   //que-1
void welcome(){
    printf("Welcome to C-TAG!!");  
}


void inte();   //que-2
void inte(){
    int n;
    n=10;
    printf("%i",n);

}



void mail_add();     //que-3
void mail_add(){  
    char name[20],mail[50];
    printf("\nEnter your name:");
    scanf("%s",&name[20]);
    printf("\nEnter Your mail:");
    scanf("%s",&mail[50]);
    printf("%s",name);
    printf("%s",mail);
}

void border();   //que-4
void border(){

}


void asterisks();    //que-5
void asterisks(){
    printf("\n*");
    printf("\n* *");
    printf("\n* * *");
}


void mul_table();    //que-6
void mul_table(){
    printf("\n9 * 1 = 9");
    printf("\n9 * 2 = 18");
    printf("\n9 * 3 = 27");
    printf("\n9 * 4 = 36");
    printf("\n9 * 5 = 45");
    printf("\n9 * 6 = 54");
    printf("\n9 * 7 = 63");
    printf("\n9 * 8 = 72");
    printf("\n9 * 9 = 81");
    printf("\n9 * 10 = 90");
}

void add_2();
void add_2(){      //que-7
    float a,b,ans;
    printf("\nEnter 2 numbers:");
    scanf("%f %f",&a,&b);
    ans=a+b;
    printf("\nAddition of 2 numbers is:%.2f",ans);
}

void mul_2();     //que-8
void mul_2(){
    float a,b,ans;
    printf("\nEnter 2 numbers:");
    scanf("%f %f",&a,&b);
    ans=a*b;
    printf("\nMultiplication of 2 numbers is:%.1f",ans);
}

void quo_rem();    //que-9
void quo_rem(){    
    int dividend, divisor, quotient, remainder;
    printf("\nEnter dividend: ");
    scanf("%d", &dividend);
    printf("\nEnter divisor: ");
    scanf("%d", &divisor);

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("\nQuotient = %d\n", quotient);
    printf("\nRemainder = %d", remainder);
}

void avg();   //que-10
void avg(){
    float a , b , avg;
    printf("\nEnter 2 numbers:");
    scanf("%f %f",&a,&b);
    avg=(a+b)/2;
    printf("\nAverage of two number is:%.1f",avg);
} 

void all_arithmetic();
void all_arithmetic(){      //que-11
    float a,b,add,sub,mul,div;
    printf("\nEnter 2 numbers:");
    scanf("%f %f",&a,&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("\nAdditon of 2 numbers is %.1f ",add);
    printf("\nSubstraction of 2 numbers is %.1f ",sub);
    printf("\nMultiplication of 2 numbers is %.1f ",mul);
    printf("\nDivison of 2 numbers is %.1f ",div);
}

void add_sub();       //que-12
void add_sub(){
    int a,b,add,sub;
    printf("\nEnter 2 numbers:");
    scanf("%i %i",&a,&b);
    add=a+b;
    sub=a-b;
    printf("\nAddition of A&B is:%i",add);
    printf("\nSubstraction of A&B is:%i",sub);
}

void compute_x();  //que-13
void compute_x(){
    int a,b,c;
    float x;
    printf("\nEnter value of A,B,C:");
    scanf("%i %i %i",&a,&b,&c);
    x=a/(b-c);
    printf("\nValue of x is:%.1f",x);

}

//que-14 not valid

void celsius_fahrenhiet();     //que-15 
void celsius_fahrenhiet(){
    float c,f;
    printf("\nEnter Temperature in Celsius:");
    scanf("%f",&c);
    f=(c*1.8)+32;
    printf("\nTemperatur in Fahrenhiet:%1.f",f);
}

void fahrenhiet_celsius();     //que-16
void fahrenhiet_celsius(){
    float c,f;
    printf("\nEnter Temperature in Fahrenhiet:");
    scanf("%f",&f);
    c=(f-32)*0.5556;
    printf("\nTemperature in Celsius:%2.f",c);
}

void cm();   //que-17
void cm(){
    float cm,m,km;
    printf("\nEnter CentiMeter:");
    scanf("%f",&cm);
    m=cm/100;
    km=cm/1000;
    printf("\n%.2f cm is %.2f meter",cm,m);
    printf("\n%.2f cm is %.2f kilometer",cm,km);
}


void area_of_circle();         //que-18
void area_of_circle(){
    int r;
    float area;
    printf("\nEnter Radius:");
    scanf("%i",&r);
    area=pi*(r*r);
    printf("\nArea of Circle is :%.2f",area);

}

void area_of_rect();         //que-19
void area_of_rect(){
    int l,b,area;
    printf("\nEnter Length And Breadth:");
    scanf("%i %i",&l,&b);
    area=l*b;
    printf("\nArea of Rectangle:%i",area);
}

void area_of_triangle();    //que-20
void area_of_triangle(){
    int b,h;
    float area;
    printf("\nEnter Base And Height :");
    scanf("%i %i",&b,&h);
    area=0.5*b*h;
    printf("\nArea of Triangle:%f",area);
}


void triangle();      //que-21
void triangle(){
    int a,b,c,s,area;
    printf("\nEnter value of A,B,C:");
    scanf("%i %i %i",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\nArea of Triangle :%i",area);

}

void dist_2_pts();      //que-22
void dist_2_pts(){
    int x1,x2,y1,y2;
    float d;
    printf("\nEnter Value of X1:");
    scanf("%i",&x1);
    printf("\nEnter Value of X2:");
    scanf("%i",&x2);
    printf("\nEnter Value of Y1:");
    scanf("%i",&y1);
    printf("\nEnter Value of Y2:");
    scanf("%i",&y2);
    d=sqrt(pow((x2-x1),2)+pow((y2-y2),2));

    printf("\nValue of D is:%.2f",d);
}

void circle_coordinate();    //que-23
void circle_coordinate(){

}



void days_conversion();          //que-24
void days_conversion(){
    int days,day,week,month,year,r1,r2,r3;
    printf("\nEnter Days:");
    scanf("%i",&days);
    year= days*0.002739726027;
    r1=day%365;
    month= r1/30;
    r2= r1%30;
    week=r2/7;
    r3=r2%7;
    day=r3%7;
    printf("\n%i Years %i Months %i Weeks %i Days",year,month,week,day);
}

void line_equation();        //que-25
void line_equation(){
    int a,b,c;
    printf("\nEnter value of A,B,C:");
    scanf("%i %i %i",&a,&b,&c);
    printf("\nEquation is Line is %ix + %iy = %i",a,b,c);
}


void arithmetic_operations();            //que-26
void arithmetic_operations(){         
    float a,b,add,sub,mul,div,rem;              
    printf("Enter 2 numbers:");
    scanf("%f %f",&a,&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    rem=(int)a%(int)b;             //explicit conversion
    printf("\nAdditon of 2 numbers is %.1f ",add);
    printf("\nSubstraction of 2 numbers is %.1f ",sub);
    printf("\nMultiplication of 2 numbers is %.1f ",mul);
    printf("\nDivison of 2 numbers is %.1f ",div);
    printf("\nRemainder of A & B is %f",rem);
}



void decimal_pasie();     //que-27
void decimal_pasie(){
    float price;
    int paise;
    printf("\nEnter Price:");
    scanf("%f",&price);
    paise=price*100;
    printf("\nPrice converted into Pasie:%i",paise);
}


void float_divide();        //que-28
void float_divide(){
    float num1,num2;
    float ans;
    printf("\nEnter 2 numbers:");
    scanf("%f %f",&num1,&num2);
    ans=num1/num2;
    printf("\n%f Divided by %.1f is %.1f",num1,num2,ans);
}



void shopping_list();      //que-29
void shopping_list(){
    char s_list[200];
    printf("\nEnter list for Shopping:");
    scanf("%s",s_list);
    printf("\nList for Shopping:%s",s_list);
}


void less_greater();         //que-30
void less_greater(){
    float input,less,greater;
    printf("\nEnter number:");
    scanf("%f",&input);
    less= floor(input);
    greater= ceil(input);
    printf("\nSmallest integer not less than the number %.2f",less);
    printf("\nlargest integer not greater than the no %.2f",greater);
}

//main function
//every thing empty paranthesis() is known as function/method 

int main(){

}