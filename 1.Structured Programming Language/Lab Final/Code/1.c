#include <stdio.h>
int main(){
    int a[500],len,count3=0,count9=0;
    printf("Input array size: ");
    scanf("%d",&len);
    printf("Input array elements: ");
    for(int i=0;i<len;i++){
    scanf("%d",&a[i]);
    if(a[i]%3==0){
    if(a[i]%9!=0){
    count9++;
    }
    }
    else{
    count3++;
    }
    }
    if(!count3){
    printf("Divisible by 3.\n");
    if(!count9){
    printf("Divisible by 9.\n");
    }
    else{
    printf("Not divisible by 9.");
    }
    }
    else {
    printf("Not divisible by 3.");
    }
    return 0;
}
