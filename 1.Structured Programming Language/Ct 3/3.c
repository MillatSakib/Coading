#include <stdio.h>
int a,b;
int main_diagonal (int arr[a][b]) {
   int sum=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
        if(i==j){
            sum+=arr[i][j];
        }
        }
    }
    return sum;
}

int minor_diagonal(int arr[a][b]){
    int cpyb,sum=0;
    cpyb=b;
    cpyb--;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
        if(j==cpyb){
            sum+=arr[i][j];
            cpyb--;
        }
        }

    }

    return sum;
}

int main(){
        printf("Please Enter row and column of Matrix: ");
        scanf("%d %d",&a,&b);
        int arr[a][b];
        if(a==b){
            printf("Please enter matrix\n");
            for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
        }
        printf("The sum of Diagonal Elements of square Matrix is %d",(minor_diagonal(arr)+main_diagonal(arr)));
        }

        else{
            printf("Sorry, this Matrix is not Square Matrix!");
        }
return 0;

}

