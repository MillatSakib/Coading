#include <stdio.h>
struct student{
    char name[24];
    long int id_no;
    char dept_name[5];
    float cgpa;
};
int main(){
    struct student niton;
    printf("%d",sizeof(niton));
    return 0;
}
