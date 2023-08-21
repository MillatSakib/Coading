//C program to find transpose of a matrix
#include <stdio.h>
int main(){
    int a,b;
    printf("Please enter row and column of matrix: ");
    scanf("%d %d",&a,&b);
    int arr1[a][b],arr2[b][a];
    printf("Please enter the matrix:\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr1[i][j]);
            arr2[j][i]=arr1[i][j];
        }
    }
    printf("The transpose matrix are:\n");
    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
 return 0;
}
