//Write a C program to find sum of upper triangular matrix.
#include <stdio.h>
int main(){
    int a,b,flag=0,sum=0;
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
        for(int j=i;j<b;j++){
            sum+=arr[i][j];

        }
    }
    printf("The summision of upper triangular is %d",sum);
    return 0;
}
