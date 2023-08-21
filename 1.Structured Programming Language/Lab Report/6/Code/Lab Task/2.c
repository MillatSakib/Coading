#include <stdio.h>
int main(){
    int arr[500],len,count=0;
    printf("Please enter arr len: ");
    scanf("%d",&len);
    printf("Please enter array Element: ");
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(arr[i]==arr[j]){
                count++;
                break;
            }
        }
    }
    printf("The duplicate elements are %d",count);
    return 0;
}
