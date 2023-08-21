#include <stdio.h>
int power(int a,int b){
    int c=1;
    for(int i=1;i<=b;i++){
        c*=a;
    }
    return c;
}
int main()
{
    int a,b,c,d=0,e,count=0;
    printf("Please enter a number for checking Armstrong or not: ");
    scanf("%d",&a);
    e=b=a;
    while(b!=0){
        b=b/10;
        count++;
    }
    while(a!=0){
        c=a%10;
        d=d+power(c,count);
        a=a/10;

}
if(e==d){
    printf("%d is an Armstrong number",e);

}
else{
    printf("%d isn't an Armstrong number",e);

}
return 0;
}
