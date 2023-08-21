// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

 struct data{

    char dep[20];
    int ID_Num;
    char name[30];


};
 struct adress{
    char city[20];
    int holding;
    struct data person;
};









struct data person;
struct adress person1;
int main()
{
    printf("name : ");
    scanf("%s", &person.name);
    printf("dep : ");
    scanf("%s", &person.dep);
    printf("id: ");
    scanf("%d", &person.ID_Num);
    scanf("%s", &person1.adress.city);
    printf("id: ");
    scanf("%d", &person1.adress.holding);


    printf("The name is %s\nThe ID_Num is %d\nThe dep is %s\nThe holding is %d\nThe city is %s\n",person.name, person.holding,person.city);

    return 0;
}
