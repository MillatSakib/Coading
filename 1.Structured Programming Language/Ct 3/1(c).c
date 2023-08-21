//Find the number of prime digits from the array in a user-defined function.
#include <stdio.h>

int primecheck(int prime_or_not){
    int count=0;
for(int i=2;i<prime_or_not;i++){
    if(prime_or_not%i==0){
        count++;
    }

}
return count;
}

void joy_bangla(int num){
int arrprime[20],count;
while(num!=0){
        if(primecheck(num%10)==0){
            arrprime[count]=num%10;
           count++;
        }

        num/=10;
    }
    printf("Prime digit/s are: ");
    for(int i=count-1;i>=0;i--){
        printf("%d ",arrprime[i]);
    }

}


int main(){

    int num;
    printf("Please enter a number: ");
    scanf("%d",&num);
    joy_bangla(num);
    return 0;

}
