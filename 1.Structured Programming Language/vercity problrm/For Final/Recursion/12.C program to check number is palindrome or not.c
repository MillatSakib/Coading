#include <stdio.h>
#include <math.h>

int palindrom_chk(int a,int c){
    if(a!=0){
        return ((a%10)*(pow(10,c)))+palindrom_chk(a/10,c-1);
    }
    else{
        return 0;
    }
}

int main(){
    int a,b,c=-1,d;
    printf("Please enter a Number for cheking Palindrom: ");
    scanf("%d",&a);
    d=a;
    while(d!=0){
        d/=10;
        c++;
    }

    b=palindrom_chk(a,c);
    if(a==b){
        printf("This number is palindrom.");
    }
    else{
        printf("This number is not palindrom.");
    }
    return 0;
}
