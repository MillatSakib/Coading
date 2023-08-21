#include <stdio.h>
int power(int a,int b){
    int c=1;
    for (int i=0;i<b;i++){
        c*=a;
    }
    return c;
}
int main(){
    int a,b=0,c=0,i=3;
    printf("Please enter a number for summision the series: ");
    scanf("%d",&a);
    printf("Summission of the series ");
    for(int i=0;i<a;i++){
       b+=(power(10,i));
       c=c+b;
       printf("%d  ",b);
    }
    printf("is : %d",c);
    return 0;
}
