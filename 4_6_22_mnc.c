// TASK-1 Your company deals with orders from clients on a regular basis.
//  To ensure that client is valid to place an order, they must be of age>18 
//  and they must have a registered account with your company. 
//  Write a code to input the client’s age and username,
//   If the username is “admin” then the client is registered with your company.
//    Otherwise, if they are of age>18 but not with a registered account,
//  show a message informing it and ask them to input a new username and password and print it.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
    int age;
    float bill;
    int p_id,quantity,total;
    char username[10],order[20],password[15];
    printf("******Welcome to XYZ_MNC*******\n");
    printf("\nEnter you Username:");
    fflush(stdin);
    gets(username);
    printf("\nEnter you age:");
    scanf("%i",&age);
    if((strcmp(username,"admin")==0) && age>18)
    {
            system("clear");
            printf("\n*********** You're Successfully Logined!! *************");
            printf("\nHere are list of Products\n1.USB-Dock(P-ID:1):-₹349\n2.Mouse(P-ID:2):-₹239\n3.Hard-disk(P-ID:3):-₹699\n4.Laptop-Case(P-ID:4):-₹500\n5.Trackpad(P-ID:5):-₹550\n");
            printf("\nEnter Product ID(P-ID) you want to buy:");
            scanf("%i",&p_id);
            printf("Enter Quantity:");
            scanf("%i",&quantity);
            if(p_id == 1)
            {
                total=349*quantity;
            }
            else if(p_id == 2)
            {
                total=239*quantity;
            }
            else if(p_id == 3)
            {
                total=699*quantity;
            }
            else if(p_id == 4)
            {
                total=500*quantity;
            }
            else if(p_id == 5)
            {
                total=550*quantity;
            }
            bill=total*1.05;
            system("clear");
            printf("you bill before discount is %.2f",bill);
            if (bill>0 && bill<1000)
                bill=0.98*bill;
            else if(bill<2000 && bill>1000)
                bill=0.95*bill;
            else if(bill<3000 && bill>2000)
                bill=0.9*bill;
            printf("\nYour Total after Discount is %.2f including GST\n\n",bill);

        
    }
    else
    {
        if((strcmp(username,"admin")!=0) && age>18)
        {
            printf("\nSorry you are not Registered user.Please Register");
            printf("\nEnter Username you want to Register:");
            fflush(stdin);
            gets(username);
            printf("\nEnter Password:");
            gets(password);
            printf("\nCongrulations!! You've Sucessfully Created account with Username:%s and Password:%s",username,password);
        }
        else
            printf("Invalid User");
    }
}