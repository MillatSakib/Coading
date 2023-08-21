#include<stdio.h>
int main(){
    int id,arrid[20],count;
    printf("Please enter your ID:");
    scanf("%d",&id);
    while(id!=0){
        arrid[count]=id%10;
        count++;
        id/=10;
    }
    printf("Your id print by array: ");
    for(int i=count-1;i>=0;i--){
        printf("%d",arrid[i]);
    }
    return 0;
}
