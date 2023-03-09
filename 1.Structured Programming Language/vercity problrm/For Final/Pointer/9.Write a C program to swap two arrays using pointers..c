#include <stdio.h>
int main(){
    int a;
    printf("Please enter  array length: ");
    scanf("%d",&a);
    int arr1[a],arr2[a],*arrptr,*arrptr1;
    printf("Please  enter 1st array element: ");
    for(int i=0;i<a;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Please  enter 2nd array element: ");
    for(int i=0;i<a;i++){
        scanf("%d",&arr2[i]);
    }
    arrptr=&arr1,arrptr1=arr2;
    for(int i=0;i<a;i++){
        int temp;
        temp=*arrptr;
        *arrptr=*arrptr1;
        *arrptr1=temp;
        arrptr++,arrptr1++;
    }
    printf("Swaped 1st array are: ");
    for(int i=0;i<a;i++){
        printf("%d  ",arr1[i]);
    }
    printf("\n");
    printf("Swaped 2nd array are: ");
    for(int i=0;i<a;i++){
        printf("%d  ",arr2[i]);
    }

}
