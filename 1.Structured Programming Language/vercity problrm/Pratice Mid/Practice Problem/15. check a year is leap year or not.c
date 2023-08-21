//15.-> check a year is leap year or not
#include <stdio.h>
int main(){
    int a;
    printf("Please enter a number for check leap year: ");
    scanf("%d",&a);
    if((a%4==0 && a%100!=0) || a%400==0){
        printf("This is a leap year");
    }
    else{
        printf("This is not a leapyear");
    }
    return 0;
}
