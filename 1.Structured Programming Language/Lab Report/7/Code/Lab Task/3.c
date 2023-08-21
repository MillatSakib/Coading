#include <stdio.h>
int fibonacci_num(int a,int b,int d){
    if(a>0){
       printf("%d ",b);
       fibonacci_num(a-1,d+b,b);
    }
}


int main(){
    int a,b=0,d=1;
    printf("Please enter how many fibonacci number you want to show: ");
    scanf("%d",&a);
    printf("Fibonacci numbers are: ");
    fibonacci_num(a,b,d);
    return 0;

}
