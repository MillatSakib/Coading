#include <stdio.h>
int power(int a,int b){
    int c=1;
    for(int i=0;i<b;i++){
        c*=a;
    }
    return c;
}
int main(){
    int a,b,c=0,d=0,e,f;
    printf("Input number: ");
    scanf("%d",&a);
    f=b=a;
    while(a!=0){
        e=b%10;
        a/=10;
        c++;

    }
    while(b!=0){
            c--;
        e=b%10;
        d+=(e*power(10,c));

        b/=10;


    }

    if(f==d){
        printf("This is palindrome.",f);
    }
    else {
        printf("This is not palindrome.\n",f);
    }
return 0;
}
