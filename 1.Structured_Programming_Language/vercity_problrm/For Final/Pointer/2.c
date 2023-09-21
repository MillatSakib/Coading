#include <stdio.h>
int main (){
    int p,q,*x,*y,a,b,c;
    p=20,q=10;
    x=&p;
    y=&q;
    a=(*x)*(*y);
    b=a+(*x);
    c=5-((*x)/(*y));
    *x=*x+10;
    printf("a=%d   b=%d   c=%d   x=%d   y=%d   p=%d   q=%d",a,b,c,x,y,p,q);
    return 0;
}
