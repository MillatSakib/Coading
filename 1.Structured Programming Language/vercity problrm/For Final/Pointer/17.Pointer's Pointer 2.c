#include <stdio.h>
void find(int **a){
    printf("Your enterd Number is: %d",**a);
}
int main(){
    int a,*b;
    b=&a;
    printf("Please enter a value: ");
    scanf("%d",&a);
    find(&b);
}
