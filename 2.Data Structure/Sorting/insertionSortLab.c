#include <stdio.h>


void selection_sort(int len,int arr[len]){
    for(int i=1;i<len;i++){
        int key = arr[i];
        int j = i-1;
        while (j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = key;
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
