//Write a C program to find sum of minor diagonal elements of a matrix.
#include <stdio.h>
int main(){
    int a,b,cpyb,sum=0;
    printf("Please Enter row and column of matrix: ");
    scanf("%d %d",&a,&b);
    cpyb=b;
    cpyb--;
    int arr[a][b];
    printf("Please enter your Matrix\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        if(j==cpyb){
            sum+=arr[i][j];
            cpyb--;
        }
        }

    }
    printf("The summission of minor diagonal of matrix is %d",sum);
    return 0;
}
