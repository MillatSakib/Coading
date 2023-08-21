//Write a C program to delete an element from an array at specified position.
#include <stdio.h>
int main(){
    int a,b;
    printf("Please enter array length: ");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    printf("Please enter the position for delet array element: ");
    scanf("%d",&b);
    for(int i=b-1;i<a;i++){
        arr[i]=arr[i+1];
    }
    printf("The deleted element are: ");
    for(int i=0;i<a-1;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}
