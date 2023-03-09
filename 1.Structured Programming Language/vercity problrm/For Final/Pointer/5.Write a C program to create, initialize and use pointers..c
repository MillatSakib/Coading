#include <stdio.h>
int main(){
    int a,*b;
    printf("Please enter an integer value: ");
    scanf("%d",&a);
    b=&a;
    printf("Value of variabel 'a' is %d\n",a);
    printf("Adress of variable 'a' is x%x\n",&a);
    printf("Pointed Address '*b' is x%x\n",b);
    printf("Address of pointer variable '*b' is x%x\n",&b);
    printf("Value of ponter variabel '*b' is %d\n",*b);
    return 0;
}
