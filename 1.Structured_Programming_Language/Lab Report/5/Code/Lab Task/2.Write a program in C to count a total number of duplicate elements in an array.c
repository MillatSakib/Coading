//Write a program in C to count a total number of duplicate elements in an array.

#include <stdio.h>
int main(){
    int a,c=0;
    printf("Please enter array length: ");
    scanf("%d",&a);
    int arr[a+2];
    printf("Please enter array element: ");
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++){
            int b=0;

        for(int j=i+1;j<a;j++){
            if(arr[i]==arr[j]){

                b++;
            }
        }
    if(b>0){
        c++;
    }
    }
    printf("The duplicate in the array is %d",c);
    return 0;
}
