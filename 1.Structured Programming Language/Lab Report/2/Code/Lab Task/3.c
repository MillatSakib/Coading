#include <stdio.h>
int main(){
    double a,b;
    printf("Please enter the value in cm:");
    scanf("%lf",&a);
    b=a/100;
    printf("The converted value in meter %lf\n",b);
     b=b/1000;
    printf("The converted value in kilometer %lf\n",b);
    return 0;
}
