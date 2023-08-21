#include <stdio.h>

int getmax(int arr[],int size){
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

void counting_sort(int arr[],int size, int pos){

        int count[10],b[size];
        for(int i=0;i<10;i++){
            count[i]=0;
        }
        for(int i=0;i<size;i++){
            ++count[(arr[i]/pos)%10];
        }
        for(int i=1;i<10;i++){
            count[i]=count[i]+count[i-1];
        }
        for(int i=size-1;i>=0;i--){
            b[--count[((arr[i])/pos)%10]]=arr[i];
        }
        for(int i=0;i<size;i++){
            arr[i]=b[i];
        }

}


void radix_sort(int arr[],int size){
    int max=getmax(arr,size);
    for(int pos=1;max/pos>0;pos*=10){
        counting_sort(arr,size,pos);
    }
}
int main(){
    int size;
    printf("Please enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Please enter array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    radix_sort(arr,size);
    printf("The sorted array is (using radix sort):");
    for(int i=0;i<size;i++){
        printf(" %d",arr[i]);
    }
    return 0;
}