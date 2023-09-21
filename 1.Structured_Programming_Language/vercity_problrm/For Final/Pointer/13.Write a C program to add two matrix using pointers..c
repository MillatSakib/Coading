#include <stdio.h>
int main(){
    int a,b;
    printf("Plese enter length of Row & Column: ");
    scanf("%d %d",&a,&b);
    int arr1[a+1][b+1],arr2[a+1][b+1],sum[a+1][b+1],*arr1ptr,*arr2ptr,*sumptr;
    arr1ptr=&arr1,arr2ptr=&arr2,sumptr=sum;
    printf("Please enter 1st Matrix: \n");
    for(int i=0;i<a*b;i++){
        scanf("%d",arr1ptr+i);
    }
    printf("Please enter 2nd Matrix: \n");
    for(int i=0;i<a*b;i++){
        scanf("%d",arr2ptr+i);
    }
    for(int i=0;i<a*b;i++){
        *(sumptr+i)=*(arr1ptr+i)+*(arr2ptr+i);
    }

    printf("Summission of the Matrix is: ");
    for(int i=0;i<a*b;i++){
        printf("%d  ",*(sumptr+i));
        if((i+1)%b==0){
            printf("\n");
        }
    }
    return 0;
}
