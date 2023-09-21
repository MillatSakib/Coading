#include <stdio.h>
int main(){
    int a,b=0,c=1,d=0;
    printf("Please enter the number how many fibonacci you want to show: ");
    scanf("%d",&a);
    if(a>1000){
        printf("You eterd a value which is greter then 1000.\n");
        printf("I will show you fibonakki number which is less then 1000\n");
        a=1000;
    }
    printf("The Fibonakki Number/s are: ");
    for (int i=0;d<a;i++){
        printf("%d  ",d);
        d=b+c;
        c=b;
        b=d;
    }
    return 0;
}
