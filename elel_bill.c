#include<stdio.h>
int main(){
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