//Write a C program to enter marks of five subjects and calculate total and average marks.
#include <stdio.h>
int main(){
    double a[5],b=0;
    printf("Please enter the Marks of 5 subject: ");
    for(int x=0;x<=4;x++){
        scanf("%lf",&a[x]);
        b=b+a[x];
    }
    printf("The Total mark of 5 subjects is %.2lf",b);
    b=b/5;
    printf(" & the avarage mark is %.2lf",b);
    return 0;
}
