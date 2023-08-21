#include <stdio.h>
int main(){
    int a,b=0,c=1,d=0;
    printf("Please enter the number how many fibonacci you want to show: ");
    scanf("%d",&a);
    printf("The Fibonakki Number/s are: ");
    for (int i=0;i<a;i++){
        printf("%d  ",d);
        d=b+c;
        c=b;
        b=d;
    }
}
