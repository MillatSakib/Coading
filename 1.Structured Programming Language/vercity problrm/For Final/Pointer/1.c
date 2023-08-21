#include <stdio.h>
int  main(){
    int x,y,*z;
    x=44;
    y=40;
    z=&x;
    printf("x= %d \t y= %d \t z=%x",x,y,z);
    y=*z;*z=10;
    printf("x= %d\t y=%d\t z=%x.",x,y,z);
    return 0;
}
