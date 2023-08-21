#include <stdio.h>
int odd_even(int a){
    if(a%2==0)
        printf("This number is even.");
    else
        printf("This number is odd.");

}

int main(){
    int a;
    printf("Please enter a Number: ");
    scanf("%d",&a);
    odd_even(a);
    return 0;
}
