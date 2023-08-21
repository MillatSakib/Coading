#include <stdio.h>
#include<stdbool.h>
bool primality_chk(int num){
    int count=0;
    if(num>1){
    for(int i=2;i<num;i++){
        if(num%i==0){
            count++;
        }
        if(count>0){
            break;
        }
    }
    if(count>0){
        return 0;
    }
    else{
        return 1;
    }
    }
    else{
        return 0;
    }
}

int main(){
    int range1,range2;
    bool ok;
    printf("Please enter the range of prime number: ");
    scanf("%d %d",&range1,&range2);
    for(int i=range1;i<=range2;i++){
       if(primality_chk(i)){
        printf("%d is prime Number\n",i);
       }
       else{
        printf("%d isn't prime Number\n",i);
       }
    }
    return 0;
}
