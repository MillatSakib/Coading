#include <stdio.h>
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a,b;
    printf("Please enter two number: ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("The swaped value are: %d %d",a,b);
    return 0;
}
