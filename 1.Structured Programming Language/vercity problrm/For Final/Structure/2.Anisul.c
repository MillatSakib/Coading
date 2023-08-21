#include <stdio.h>
struct student{
    char name[100];
    int id;
};

int main(){
    struct student student1={"Md. Sohan Millat Sakib",222902036};
    printf("Your Name is \"%s\" and your id is '%d'.",student1.name,student1.id);
    return 0;
}
