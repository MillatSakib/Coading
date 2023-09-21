//Write a C program to input and print array elements using pointer.
#include <stdio.h>
int main(){
    int a;
    printf("Please enter array length: ");
    scanf("%d",&a);
    int arr[a+2],*arrptr;
    printf("Please enter array element: ");
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    arrptr=&arr;
    printf("Elements of your array are: ");
    for(int i=0;i<a;i++){
        printf("%d  ",*arrptr);
        arrptr++;
    }
    return 0;
}
