//Write a C program to find sum of each row and column of a matrix.
#include <stdio.h>
int main(){
    int a,b,sumr,sumc;
    printf("Please enter row and column of Matrix: ");
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++){
            sumr=0;
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
            sumr+=arr[i][j];
        }
    printf("The sum of row %d is %d\n",(i+1),sumr);
    }

    for(int i=0;i<a;i++){
            sumc=0;
        for(int j=0;j<b;j++){
            sumc+=arr[j][i];
        }
    printf("The sum of column %d is %d\n",(i+1),sumc);
    }
}
