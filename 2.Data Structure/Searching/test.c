#include <stdio.h>


int linear_search(int len,int arr[len], int target){
    int left,right,mid;
    left=0;
    right=len-1;
    while(right>=left){
        mid=(left+right)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;
}


int main(){
    int len,ok,target;
    printf("Please enter length of array: ");
    scanf("%d",&len);
    int arr[len+2];
    printf("Please enter element of array: ");
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    printf("Please enter value you want to search: ");
    scanf("%d",&target);
    ok=linear_search(len,arr,target);
    if(ok>0){
        printf("The value find in position %d.\n",(ok+1));
    }
    else{
        printf("Target Not found.\n");
    }
}