//Find the minimum and maximum element in an array
#include <stdio.h>
int main(){
    int len;
    scanf("%d",&len);
    int a[len];
    for(int i=0;i<len;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(a[j+1]<a[j]){
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The minimum number is %d and the maximum number is %d ",a[0],a[len-1]);
}
