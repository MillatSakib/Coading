#include <stdio.h>

int main(){
    int arrlen,arrlen1=0,arrlen2=0;
    printf("Please enter array length: ");
    scanf("%d",&arrlen);
    int arr1[arrlen],arr2[arrlen],arr3[arrlen][2];
    printf("Please enter array element: ");
    for(int i=0;i<arrlen;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<arrlen;i++){
            int count=0;
        for(int j=0;j<=i;j++){
            if(arr1[i]==arr2[j]){
                count++;
            }
        }
        if(count==0){
            arr2[arrlen1]=arr1[i];
            arrlen1++;
        }
    }

    for(int i=0;i<arrlen1;i++){
        for(int j=0;j<arrlen;j++){
            if(arr2[i]==arr1[j]){
            arrlen2++;
            }
        }
        arr3[i][0]=arr2[i];
        arr3[i][1]=arrlen2;
        arrlen2=0;
    }
    for(int i=0;i<arrlen1;i++){

             printf("Frequency of %d is %d\n",arr3[i][0],arr3[i][1]);

    }


    return 0;
}

