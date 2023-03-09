#include <stdio.h>
int mul13(int a,int b){
    int sum=0;
    for(int i=a;i<=b;i++){
        if(i%13!=0){
            sum+=i;
        }
    }
    return sum;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
    printf("%d\n",mul13(a,b));
    return 0;

}