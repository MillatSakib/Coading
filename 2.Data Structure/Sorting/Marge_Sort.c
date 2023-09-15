#include <stdio.h>

//marge funtion
void merge(int arr[], int l, int m, int r,int size){
    int i=l;
    int j=m+1;
    int k=l;
    //int size= (r-l)+1;
    int temp[size];
    while (i<=m && j<=r){
        if(arr[i]<=arr[j])
        {
            temp[k]=arr[i];
            i++;
            k++;
        }
        else{
            temp[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<=m){
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=r){
        temp[k]=arr[i];
        j++;
        k++;
    }
    for(int s=l;s<=r;s++){
        arr[s]=temp[s];
    }
}


//margesort funtion
void mergesort(int arr[],int l,int r,int size){
    if(l<r){
        int m= (l+r)/2;
        //you can use the formula for find out mid lest int overflow are occured
        //mid=left+(right-left)/2 
        mergesort(arr,l,m,size);
        mergesort(arr,m+1,r,size);
        merge(arr,l,m,r,size); 
    }     
}


int main(){
    int len;
    printf("Please enter array Length: ");
    scanf("%d",&len);
    int arr[len];
    printf("Please enter array for operate Marge Sort: ");
    for (int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    printf("Before Marge Sort: \n");
    for (int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
    mergesort(arr,0,(len-1),len);
    printf("\n");
    printf("After Merge Sort: ");
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}