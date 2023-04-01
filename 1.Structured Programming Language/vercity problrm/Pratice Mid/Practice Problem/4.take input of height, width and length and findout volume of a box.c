//take input of height, width and length and findout volume of a box
#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("Please Enter the Height Width and Length: ");
    scanf("%d %d %d",&a,&b,&c);
    d=a*b*c;
    printf("The volume of the box is %d",d);
    return 0;
}
