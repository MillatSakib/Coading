#include <stdio.h>
#include <conio.h>
void B_date(int x,int y, int z){
    printf("Niton's birth date is %d-%d-%d.\n\n",x,y,z);
}
int main(){
    struct Date{
    int day;
    int month;
    int year;
    };
    struct Date birth_date;
    birth_date.day=1;
    birth_date.month=1;
    birth_date.year=1975;
    B_date(birth_date.day, birth_date.month, birth_date.year);
    return 0;
}
