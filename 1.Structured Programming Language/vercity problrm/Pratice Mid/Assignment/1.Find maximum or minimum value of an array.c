//Find maximum or minimum value of an array
#include <stdio.h>
#include <string.h>
int main(){
    int b,c,i;
    printf("Please enter how many number input for Find out Maximum and minimum: ");
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;++i){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<i;j++){
        for(int k=0;k<i;k++){
            if(a[k]>a[k+1]){
                int temp;
                temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
        }
    }
    printf("The largest numeber is %d and minimum number is %d",a[i-1],a[0]);
    return 0;
}
