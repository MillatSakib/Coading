//16.-> power of a number, square of a number
#include <stdio.h>
int power(int a,int b){
    int i=1;
    for(int j=1;j<=b;j++){
        i=i*a;
    }
    return i;
}
int main(){
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    d=a*a;
    c=power(a,b);
    printf("The value of %d^%d is %d\n",a,b,c);
    printf("The value of %d^2 is %d",a,d);
    return 0;
}
