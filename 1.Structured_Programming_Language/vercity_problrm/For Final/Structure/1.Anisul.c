#include <stdio.h>

struct student{
    int id;
    char name[100];
    char dept[50];
    int birth_year;
};

int main(){
    struct student student1;
    printf("Please enter your ID: ");
    scanf("%d",&student1.id);
    printf("Please enter your Name: ");
    fflush(stdin);
    gets(student1.name);
    printf("Please enter your depert Name: ");
    fflush(stdin);
    gets(student1.dept);
    printf("Please enter your Birth Year: ");
    scanf("%d",&student1.birth_year);
        printf("Your ID: ");
        printf("%d",student1.id);
    printf("\nYour Name: ");
    fflush(stdin);
    puts(student1.name);
    printf("Please enter your depert Name: ");
    fflush(stdin);
    puts(student1.dept);
    printf("Please enter your Birth Year: ");
    printf("%d",student1.birth_year);
    return 0;

}
