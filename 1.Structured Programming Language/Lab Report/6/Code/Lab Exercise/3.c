#include <stdio.h>
int main(){
    int len,len1=0;
    printf("Please enter array length: ");
    scanf("%d",&len);
    int arr[len+2],arr0[len];
    printf("Please enter array element:\n");
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<len;i++){
            int count=0;
        for(int j=0;j<len;j++){
            if(arr[i]==arr0[j]){
                count++;
            }
        }
        if(count==0){
            arr0[len1]=arr[i];
            len1++;
        }

    }


    int arr1[len1];
    for(int i=0;i<len1;i++){
        arr1[i]=0;
    }


    for(int i=0;i<len1;i++){
        for(int j=0;j<len;j++){
        if(arr0[i]==arr[j]){
            arr1[i]++;
        }
    }
    }
    for(int i=0;i<len1;i++){
        printf("The frequency of %d is %d\n",arr0[i],arr1[i]);
    }
return 0;
}
