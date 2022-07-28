#include<stdio.h>

struct car
{
    char c_name[50];
    int no_of_seats;
    float rent;
    char c_status[30];
};



int main(){
    int i;
    struct car c1[20];          
    printf("Enter No Of Data you want to Enter:");           //no of data
    scanf("%i",&i);
    for(int n=0;n<i;n++)                 
    {
        printf("Enter Name of Car:");
        scanf("%s",c1[n].c_name);
        printf("Enter No of Seats in car:");
        scanf("%i",&c1[n].no_of_seats);
        printf("Enter Rent of car:");
        scanf("%f",&c1[n].rent);
        printf("Status of car(1.Available,2.Not Available):");
        scanf("%s",c1[n].c_status);
        printf("\n");
    }
    for(int j=0;j<i;j++)
    {
        printf("Name:%s\nNo of Seats:%i\nRent of Car:%.1f\nStatus of Car(1.Available,2.Not Available):%s\n",c1[j].c_name,c1[j].no_of_seats,c1[j].rent,c1[j].c_status);
    }
}