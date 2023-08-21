#include <stdio.h>
int main(){
    int a,*b,**c,***d;
    b=&a;
    c=&b;
    d=&c;
    printf("Please enter a Value: ");
    scanf("%d",&a);
    printf("Value of 'a' variable is '%d' and address is '0x%x'\n",a,&a);
    printf("Value of '*b' variable is '%d' and address is '0x%x'\n",b,&b);
    printf("Value of '**c' variable is '%d' and address is '0x%x'\n",c,&c);
    printf("Value of 'a' variable is '%d' and address is '0x%x'\n",d,&d);
    printf("The value of pointer's is:  %d  %d  %d",*b,**c,***d);
    return 0;
}
