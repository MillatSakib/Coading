//Write a C program to copy one array to another using pointers.
#include <stdio.h>
int main(){
    int len;
    printf("Please enter array length: ");
    scanf("%d",&len);
    int arr1[len+2],arr2[len+2],*arrptr;
    printf("Please entry array element: ");
    for(int i=0;i<len;i++){
        scanf("%d",&arr1[i]);
    }
    arrptr=&arr1;
    printf("The copied array are: ");
    for(int i=0;i<len;i++){
        arr2[i]= *arrptr;
        arrptr++;
    }
    for(int i=0;i<len;i++){
        printf("%d  ",arr2[i]);
    }
    return 0;
}
