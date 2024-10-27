#include <stdio.h>


void selection_sort(int len,int arr[len]){
    for(int i=0;i<=len-1;i++){
        int smallest = i;
        for(int j= i+1; j<=len; j++){
            if(arr[j]<arr[smallest]){
                smallest=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[smallest];
        arr[smallest] = temp;
    }
printf("The sorted array are:  ");
    for(int i=0;i<len;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
}


int main(){
    int len;
    printf("Please enter array length: ");
    scanf("%d",&len);
    int arr[len+2];
    printf("Please enter array element: ");
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    selection_sort(len,arr);
    return 0;
}
