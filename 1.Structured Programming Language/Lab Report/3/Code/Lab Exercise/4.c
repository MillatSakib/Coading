//Write a C program to check whether a year is leap year or not.
#include <stdio.h>
int main (){
    int leap_year;
    printf("Please enter a year for check it is leap year or not: ");
    scanf("%d",&leap_year);
    if(((leap_year%4==0)&&(leap_year%100!=0))||(leap_year%400==0)){
        printf("This is leap year\n");
    }
    else{
        printf("This is not leap year\n");
    }
    return 0;
}
