#include <stdio.h>
int count_digit(int a,int count){
    if(a>0){
       return count_digit(a/=10,count+1);
    }
    else{
            return count;
    }
}
int main(){
    int a,count=0;
    printf("Please enter a Number: ");
    scanf("%d",&a);
    printf("There have total %d digit/s,",count_digit(a,count));
    return 0;
}