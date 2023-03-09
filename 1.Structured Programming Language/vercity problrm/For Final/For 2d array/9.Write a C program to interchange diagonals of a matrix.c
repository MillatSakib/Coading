//Write a C program to interchange diagonals of a matrix.
#include <stdio.h>
int main(){
    int a,b,cpyb;
    printf("Please Enter row and column of martix: ");
    scanf("%d %d",&a,&b);
    cpyb=b;
    cpyb--;
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
printf("The interchanged diagonal matrix are\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(i==j){
                int temp;
                temp=arr[i][j];
                arr[i][j]=arr[i][cpyb];
                arr[i][cpyb]=temp;
                cpyb--;

            }
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
