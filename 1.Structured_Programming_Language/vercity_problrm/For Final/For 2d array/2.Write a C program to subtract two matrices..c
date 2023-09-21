/*Write a C program to subtract two matrices.
The rule for sub two matrix is the value of colum and row of two matrix(order of two matrix) is same.

if matrix1= 1   5       and matrix2= 7    8
            2   7                    5    6

    Then matrix1-matrix2= 1-7       5-8
                          2-5       7-6

                        =  6        -3
                          -3        -2
And the order of sub of two matrix is same of the two matrix.

*/
#include <stdio.h>
int main(){
    int i1,i2,j1,j2;
    printf("Please enter the row and column of 1st array: ");
    scanf("%d %d",&i1,&j1);
    printf("Please enter the row and column of 2nd array: ");
    scanf("%d %d",&i2,&j2);
    int arr1[i1][j1],arr2[i2][j2],arrsum[i1][j1];
    if((i1==i2)&&(j1==j2)){
    printf("Please Enter the 1st array: ");
    for(int i=0;i<i1;i++){
        for(int j=0;j<j1;j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Please Enter the 2nd array: ");

    for(int i=0;i<i2;i++){
        for(int j=0;j<j2;j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    for(int i=0;i<i1;i++){
        for(int j=0;j<j1;j++){
            arrsum[i][j]=arr1[i][j]-arr2[i][j];
        }
    }
    printf("The subtraction of two matrix is:\n\t");
    for(int i=0;i<i1;i++){
        for(int j=0;j<j1;j++){
           printf("%d\t",arrsum[i][j]);
        }
        printf("\n\t");
    }
    }
    else{
        printf("It is not to possible to subtraction two array..\n");
    }
    return 0;
}
