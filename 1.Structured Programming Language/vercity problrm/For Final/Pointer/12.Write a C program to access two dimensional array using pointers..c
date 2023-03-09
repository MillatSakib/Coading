#include <stdio.h>
int main(){
    int a,b;
    printf("Plese enter Row and Column of Matrix: ");
    scanf("%d %d",&a,&b);
    int arr[a][b],*arrptr;
    arrptr=&arr;
    printf("Please enter the array:\n");
    for(int i=0;i<a*b;i++){
            scanf("%d",arrptr+i);
        }
    printf("The array you enter: \n");
    for(int i=1;i<=a*b;i++){
        printf("%d  ",*arrptr);
        arrptr++;
        if(i%b==0){
            printf("\n");
        }
    }
    return 0;
}
