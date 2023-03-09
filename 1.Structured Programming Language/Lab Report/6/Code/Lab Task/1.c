#include <stdio.h>
int main(){
    int a[500],i;
    printf("Please enter array length: ");
    scanf("%d",&i);
    printf("Please enter all element of array: ");

    for(int j=0;j<i;j++){
        scanf("%d",&a[j]);
    }
    printf("The reversed array are: ");
        for(int j=i-1;j>=0;j--){
        printf("%d  ",a[j]);
    }

    return  0;
}
