//Write a C program to merge two array to third array.
#include <stdio.h>
int main(){
    int a,b,count=-1;
    printf("Please enter the first element length: ");
    scanf("%d",&a);
    printf("Please enter the second element length: ");
    scanf("%d",&b);
    int arr1[a],arr2[b],mergearr[a+b];
    printf("Please enter the element of first array\n");
    for(int i=0;i<a;i++){
        scanf("%d",&arr1[i]);
        count++;
        mergearr[i]=arr1[i];
    }
    printf("Pleases enter the element of second array\n");
    for(int i=0;i<b;i++){
      scanf("%d",&arr1[i]);
      mergearr[count]=arr2[i];
    }
    printf("The marged array is: ");
    for(int i=0;i<(a+b);i++){
        printf("%d",mergearr[i]);
    }
    return 0;
}
