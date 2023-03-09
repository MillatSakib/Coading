//Write a C program to reverse an array using pointers.
#include <stdio.h>
int main(){
        int a;
        printf("Plese enter array length: ");
        scanf("%d",&a);
        int arr1[a+1],arr2[a+1],*arrptr;
        printf("Please enter your array element:  ");
        for(int i=0;i<a;i++){
            scanf("%d",&arr1[i]);
        }
        arrptr=&arr1;
        for(int i=a-1;i>=0;i--){
        arr2[i]=*arrptr;
        arrptr++;
        }
        printf("The reversed array is:  ");
        for(int i=0;i<a;i++){
            printf("%d  ",arr2[i]);
        }
        return 0;
}
