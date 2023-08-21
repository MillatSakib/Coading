#include <stdio.h>
int main(){
    int len;
    printf("Please enter array length: ");
    scanf("%d",&len);
    int arr[len+2];
    printf("Please enter array element: ");
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<len;i++){
        for(int j=i;j<len;j++){
        if(arr[i]>arr[j]){
            int temp;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }
    }
    printf("The minimum element are %d.\nThe maximum element are %d.",arr[0],arr[len-1]);
    return 0;
}
