//Write a C program to multiply two matrices.
#include <stdio.h>
int main(){
    int i1,i2,j1,j2;
    printf("Please enter the row and column of 1st array: ");
    scanf("%d %d",&i1,&j1);
    printf("Please enter the row and column of 2nd array: ");
    scanf("%d %d",&i2,&j2);
    int arr1[i1][j1],arr2[i2][j2],arrmul[i1][j1];
    if((i1==j1)&&(i2==j2)){
    printf("Please Enter the 1st array:\n");
    for(int i=0;i<i1;i++){
        for(int j=0;j<j1;j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Please Enter the 2nd array:\n");

    for(int i=0;i<i2;i++){
        for(int j=0;j<j2;j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    for(int i=0;i<i1;i++){
        for(int j=0;j<j1;j++){
            arrmul[i][j]=arr1[i][j]*arr2[j][i];
        }
    }
    printf("The multiplication of two matrix is:\n\t");
    for(int i=0;i<i1;i++){
        for(int j=0;j<j1;j++){
           printf("%d\t",arrmul[i][j]);
        }
        printf("\n\t");
    }
    }
    else{
        printf("It is not to possible to multiply two array..\n");
    }
    return 0;
}
