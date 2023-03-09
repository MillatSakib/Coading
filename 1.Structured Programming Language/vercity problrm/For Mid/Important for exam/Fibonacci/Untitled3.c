#include <stdio.h>
int  main(){
    int a,b=1,c=0,d=0;
    printf("Please enter how many fibonakki number you want to show: ");
    scanf("%d",&a);
    printf("The fibonacci number is: ");
    for(int i=0;i<a;i++){
        printf("%d ",d);
        d=b+c;
        b=c;
        c=d;
    }
    return 0;
}
