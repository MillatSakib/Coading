//Write a C program to find sum of main diagonal elements of a matrix.


#include <stdio.h>

int main () {
   int a,b,sum=0;
    printf("Please Enter row and column of matrix: ");
    scanf("%d %d",&a,&b);
    int arr[a][b];
    printf("Please enter your Matrix\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        if(i==j){
            sum+=arr[i][j];
        }
        }

    }
    printf("The summission of main diagonal of matrix is %d",sum);
    return 0;
}
