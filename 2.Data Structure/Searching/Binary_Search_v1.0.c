#include <stdio.h>
#include <stdbool.h>



bool sort_chk(int len, int arr[len]){
    bool ok1=0,ok2=0;
    for(int i=0;i<len-1;i++){
        if(arr[i]>arr[i+1]){
            ok1=1;
        }
        else{
            ok2=1;
        }
    }
    if(ok1 == !ok2){
        return true;
    }
    else{
        return false;
    }
}



int binary_search(int len,int A[len],int x){
    int left,right,mid;
    left=0;
    right=len-1;
    while(left<=right){
        mid=(left+right)/2;
        if(A[mid]==x){
            return mid;     //we get expected value
        }
        else if(A[mid]<x){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;          //we can't get expected value
}





int main(){
    int len,target;
    printf("Please enter array length: ");
    scanf("%d",&len);
    int arr[len+2];
    printf("Please enter array Element(must be sorted): ");
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    printf("Please enter a searching Element: ");
    scanf("%d",&target);
    if(sort_chk(len, arr)){
        int temp;
        temp=binary_search(len,arr,target);
        if(temp>0){
            printf("Item found on position %d\n",temp+1);
        }
        else{
            printf("Item Not Found...\n");
        }
    }
    else{
        printf("Array element are not  Sorted.\n");
    }
    return 0;
}