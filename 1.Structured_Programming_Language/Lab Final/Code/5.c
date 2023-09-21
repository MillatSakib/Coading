#include <stdio.h>
int fibonacci_num(int a,int b,int d){
    if(a>0){
       return b+fibonacci_num(a-1,d+b,b);
    }
    else {
            return 0;
    }
}


int main(){
    int a,b=0,d=1;
    printf("Input n: ");
    scanf("%d",&a);
    printf("Sum: %d",fibonacci_num(a,b,d));
    return 0;

}
