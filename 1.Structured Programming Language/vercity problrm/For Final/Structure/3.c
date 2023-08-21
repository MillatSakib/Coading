#include <stdio.h>
#include <conio.h>
struct student{
    char *name;niton
    long int id;
    char *dept_name;
    float cgpa;
} niton ={"Niton",  942044, "Cse", 3.43};

int main(){
    printf("\n Student name: %s",niton.name);
    printf("\n Id No: %ld",niton.id);
    printf("\n Dept. Name: %s",niton.dept_name);
    printf("\n Cgpa: %.2f",niton.cgpa);
    getch();
    return 0;
}
