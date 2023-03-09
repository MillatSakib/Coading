//Write a C program to check whether two matrices are equal or not.

#include <stdio.h>
int main(){
    int row1,column1,row2,column2,flag=0;
    int  i,j,k,l;
    printf("Please enter Row and Column of first Matrix: ");\
    scanf("%d %d",&row1,&column1);
    printf("Please enter all elemet of 1st matrix: ");
    int arr[row1][column1];
    printf("Please Enter your a matrix: ");
    for(i=0;i<row1;i++){
        for(j=0;j<column1;j++){
            scanf("%d",&arr[i][j]);
        }

    }
    printf("Please enter Row and Column of first Matrix: ");\
    scanf("%d %d",&row2,&column2);
    printf("Please enter all elemet of first matrix: ");
    int arr1[row2][column2];
    printf("Please Enter 2nd matrix: ");
    for(k=0;k<row2;k++){
        for(l=0;l<column2;l++){
            scanf("%d",&arr1[k][l]);
        }

    }
if(i==k && j==l){
   for(k=0;k<row2;k++){
        for(l=0;l<column2;l++){
            if(arr[k][l]!=arr1[k][l]){
                flag++;
            }
        }

}
if(flag>0){
            printf("This matrix is not equal\n");
        }
        else{
           printf("This matrix is equal\n");
        }
}
else{
           printf("This matrix is not equal\n");
        }
    return 0;
}
