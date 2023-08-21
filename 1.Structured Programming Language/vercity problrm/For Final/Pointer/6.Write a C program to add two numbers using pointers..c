#include <stdio.h>
int main(){
    int a,b,*c,*d,sum;
    printf("Plese enter two integer number for sum:");
    scanf("%d %d",&a,&b);
    c=&a;
    d=&b;
    sum=(*c)+(*d);
    printf("The sum of %d and %d is %d.",*c,*d,sum);
    return 0;
}
