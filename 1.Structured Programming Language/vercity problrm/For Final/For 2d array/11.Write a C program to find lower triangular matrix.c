//Write a C program to find lower triangular matrix.
#include <stdio.h>
int main(){
    int a,b,flag=0;
    printf("Please enter row and column length of matrix: ");
    scanf("%d %d",&a,&b);
    int arr[a][b];
    printf("Please enter Matrix:");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);

        }
    }
    for(int i=0;i<a;i++){
        for(int j=i+1;j<b;j++){
            if(arr[i][j]!=0){
                flag++;
            }

        }
    }
    if(flag>0){
        printf("This is'nt a lower triagluar mateix.");
    }
    else{
        printf("This isn a lower triangular martix.");
    }
}
