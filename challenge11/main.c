#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



bool is_leap_year(int year){
    //1er methode
//    return (year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0));

//    2eme methode

    if(year%4 ==0){
        if(year%100 != 0){
            if(year%400 == 0)
                return false;
            else
                return true;
        }
        else
            return true;
    }
    else
        return false;
}
int main()
{
    int year;
    do{
        printf("Donner l annee : ");
        scanf("%d",&year);
    }while( year<1800 || year>10000);
    is_leap_year(year) ? printf("true"):printf("false");
    return 0;
}
