#include <stdio.h>
int main(){
    int a[10]={1,2,1,3,5,1,2,3,7,6},b[10],count=0;
    int j;
    for(int i=0;i<10;i++){
            int ok=0;
        for(j=0;j<=i;j++){
            if(a[i]==b[j]){
                ok++;
            }

        }
        if(ok==0){
                b[count]=a[i];
                count++;
            }
    }
    printf("The fresh array is: ");
    for(int i=0;i<count;i++){
        printf("%d ",b[i]);
    }
}
