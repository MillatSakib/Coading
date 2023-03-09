#include <stdio.h>
int main(){
    int len;
    printf("Please enter length of array: ");
    scanf("%d",&len);
    int arr[len+2];
    int odd_arr[len],even_arr[len];
    int odd_count=0,even_count=0;
    printf("Please enter array element: ");
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<len;i++){
        if(arr[i]%2==0){
            even_arr[even_count]=arr[i];
            even_count++;
        }
        else{
            odd_arr[odd_count]=arr[i];
            odd_count++;
        }
    }
    printf("Even Numbers are : ");
    for(int i=0;i<even_count;i++){
        printf("%d\t",even_arr[i]);
    }
    printf("\nOdd Numbers are : ");
    for(int i=0;i<odd_count;i++){
        printf("%d\t",odd_arr[i]);
    }
    return 0;
}
