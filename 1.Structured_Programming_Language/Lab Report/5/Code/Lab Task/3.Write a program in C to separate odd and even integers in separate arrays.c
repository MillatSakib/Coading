//Write a program in C to separate odd and even integers in separate arrays.
#include <stdio.h>
int main(){
    int a;
    printf("Please Enter the array length: ");
    scanf("%d",&a);
    int arr[a+2],oddarr[a],evenarr[a];
    printf("Please Enter array element: ");
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    printf("The seperated odd integer array is: ");
    for(int i=0;i<a;i++){
        if(arr[i]%2!=0){
            oddarr[count]=arr[i];
            printf("%d ",oddarr[count]);
            count++;
        }
    }
    printf("\n");
    count=0;
    printf("The seperated even integer array is: ");
    for(int i=0;i<a;i++){

        if(arr[i]%2==0){
            evenarr[count]=arr[i];
            printf("%d ",evenarr[count]);
            count++;
        }

}
}
