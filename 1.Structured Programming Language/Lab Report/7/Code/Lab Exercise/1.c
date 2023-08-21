#include <stdio.h>
void dec_bin(int a){
        int arr[15],i=0;
        while(a!=0){
            arr[i++]=a%2;
            a/=2;
        }
        printf("The Binary value is: ");
        while(i!=0){
            printf("%d",arr[--i]);
        }

}

int main(){
    int a;
    printf("Please enter a decemal point value: ");
    scanf("%d",&a);
    dec_bin(a);
    return 0;
}
