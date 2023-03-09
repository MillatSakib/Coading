#include <stdio.h>
int linear_search(int len,int arr[len],int target){
    for(int i=0;i<len;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int len,find,ok;
    printf("Please enter array length: ");
    scanf("%d",&len);
    int arr[len+2];
    printf("Please eneter array element: ");
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    printf("Please enter item which you want to found: ");
    scanf("%d",&find);
    ok=linear_search(len,arr,find);
    if(ok>0){
        printf("Item found at position %d\n",(ok+1));
    }
    else{
        printf("Item Not Found.");
    }
    return 0;

}