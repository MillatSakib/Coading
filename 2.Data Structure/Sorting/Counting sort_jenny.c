#include <stdio.h>
void counting_sort(int arr[],int size, int top){

        int count[top+1],b[size];
        for(int i=0;i<top;i++){
            count[i]=0;
        }
        for(int i=0;i<size;i++){
            ++count[arr[i]];
        }
        for(int i=1;i<=top;i++){
            count[i]=count[i]+count[i-1];
        }
        for(int i=size-1;i>=0;i--){
            b[--count[arr[i]]]=arr[i];
        }
        for(int i=0;i<size;i++){
            arr[i]=b[i];
        }
    
}
int main(){
    int size,top=0;         //counting sort are working for positive and integer value
    printf("Please enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Please enter all element of array: ");
    for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
    if (top<arr[i])
    {
        top=arr[i];
    }
    
    }
    counting_sort(arr,size,top);
    printf("The sorted array are(using counting sort): ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}