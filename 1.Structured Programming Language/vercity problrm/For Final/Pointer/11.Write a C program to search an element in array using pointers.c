#include <stdio.h>
int main(){
        int a,search,count=0;
        printf("Please enter array length: ");
        scanf("%d",&a);
        int arr[a+1],*arrptr;
        printf("Please enter array element: ");
        for(int i=0;i<a;i++){
            scanf("%d",&arr[i]);
        }
        arrptr=&arr;
        printf("Please enter Number for searching: ");
        scanf("%d",&search);
        for(int i=0;i<a;i++){
            if(*arrptr==search){
                count++;
            }
            arrptr++;
        }
        if(count){
            printf("%d has %d time/s.",search,count);
        }
        else{
            printf("%d not found on the array.",search);
        }
}
