//Write a C program to find sum of lower triangular matrix.
#include <stdio.h>
int main(){
    int a,b,sum=0;
    printf("Please enter row and column length of matrix: ");
    scanf("%d %d",&a,&b);
    int arr[a][b];
    printf("Please enter Matrix:\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);

        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<i+1;j++){
            sum+=arr[i][j];

        }
    }
    printf("The summision of lower triangular matrix is %d",sum);
}
