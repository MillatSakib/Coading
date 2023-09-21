//Write a C program to check Identity matrix.
#include <stdio.h>
int main(){
    int a,b,count1=0,count2;
    printf("Please enter matrix row and column: ");
    scanf("%d %d",&a,&b);
    int arr[a][b];
    printf("Please enter the Matrix\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
            if(i==j){
                if(arr[i][j]!=1){
                    count1++;
                }
            }
            else if(a[i][j]!=0){
                count2++;
            }
        }
    }
    if(count1==0 && count2==0){
        printf("This Matrix is Identity Matrix...");
    }
    else{
        printf("This Matrix isn't Identity Matrix...");
    }
    return 0;
}
