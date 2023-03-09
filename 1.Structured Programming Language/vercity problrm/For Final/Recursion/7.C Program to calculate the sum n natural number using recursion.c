#include <stdio.h>

int natural_num_sum(int a){
    if(a!=0){
        return a+natural_num_sum(a-1);
    }
    else{
        return 0;
    }

}

int main(){
    int a;
    printf("Please input how many natural number you want to sum: ");
    scanf("%d",&a);
    printf("The sum of %d natural number is %d",a,natural_num_sum(a));
    return 0;
}
