#include <stdio.h>

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int  partition(int arr[],int lb,int ub){
    int pivot =arr[lb];
    int start=lb;
    int end=ub;
    while(start<end){
        while(arr[start]<=pivot){
            start++;
        }
        while(arr[end]>pivot){
        end--;
    }
    if(start < end){
        swap(&arr[start],&arr[end]);
    }
    }
    swap(&arr[lb],&arr[end]);
    return end;
    
}


void quick_sort(int arr[], int lb, int ub){

    if (lb<=ub){
        int loc=partition(arr,lb,ub);
        quick_sort(arr,lb,loc-1);
        quick_sort (arr,loc+1,ub);
    }

}

int main(){
    int ub;
    printf("Please enter the size of array: ");
    scanf("%d",&ub);
    int arr[ub];
    printf("Please enter all element of array: ");
    for(int i=0;i<ub;i++){
        scanf("%d",&arr[i]);
    }
    quick_sort(arr,0,ub-1);
    printf("The array after sorting(using Quick sort):");
    for(int i=0;i<ub;i++){
        printf(" %d",arr[i]);
    }
    return 0;
}