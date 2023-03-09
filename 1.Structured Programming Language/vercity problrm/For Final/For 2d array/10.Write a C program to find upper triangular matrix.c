//Write a C program to find upper triangular matrix.
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
        for(int j=0;j<i;j++){
            if(arr[i][j]!=0){
                flag++;
            }

        }
    }
    if(flag>0){
        printf("This isn't a upprer triagluar mateix.");
    }
    else{
        printf("This is a upper triangular martix.");
    }
    return 0;
}
