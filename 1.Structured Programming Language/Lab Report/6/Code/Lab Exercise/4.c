#include <stdio.h>
int main(){
    int row,column;
    printf("Please enter row and column of matrix: ");
    scanf("%d %d",&row,&column);
    int arr[row+2][column+2];
    printf("Please enter array element:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("The tranpose matrix are:\n");
    for(int i=0;i<column;i++){
        for(int j=0;j<row;j++){
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }
return 0;
}


