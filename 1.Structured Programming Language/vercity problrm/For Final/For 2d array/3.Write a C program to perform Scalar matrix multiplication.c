//Write a C program to perform Scalar matrix multiplication.

#include <stdio.h>
int main(){
    int row,column,scalerop;
    int  i,j;
    printf("Please enter Row and Column: ");\
    scanf("%d %d",&row,&column);
    printf("Please enter a value for scaler operation: ");
    scanf("%d",&scalerop);
    int arr[row][column];
    printf("Please Enter your a matrix: ");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
            arr[i][j]=arr[i][j]*scalerop;
        }

    }

    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%d\t",arr[i][j]);
        }

        printf("\n");
    }
}

