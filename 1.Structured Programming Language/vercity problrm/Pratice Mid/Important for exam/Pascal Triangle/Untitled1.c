#include <stdio.h>
int factorial(int a){
    int c=1;
    for(int i=1;i<=a;i++){
        c*=i;
    }
    return c;
}

int combination(int a,int b){
//n! / r! * (n - r)!
    int c;
    c=((factorial(a))/((factorial(b)*(factorial(a-b)))));
    return c;
}

int main(){
    int len;
    printf("Please enter length for Making Pascal triangle: ");
    scanf("%d",&len);
    for(int i=0;i<len;i++){
            for(int j=1;j<(len-(i));j++){
                printf(" ");
            }
        for(int j=0;j<=i;j++){
            printf("%d ",combination(i,j));
        }
        printf("\n");
    }
return 0;
}
