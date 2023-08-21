#include <stdio.h>

int num_sum(int soyeb_bokaganda){
    int shamim_bokaganda=0;
    while(soyeb_bokaganda!=0){
        shamim_bokaganda+=soyeb_bokaganda%10;
        soyeb_bokaganda/=10;
    }
    return shamim_bokaganda;
}

int main(){
    int num;
    printf("Please enter a for sum: ");
    scanf("%d",&num);
    printf("Sum of all digit is %d",num_sum(num));
    return 0;
}
