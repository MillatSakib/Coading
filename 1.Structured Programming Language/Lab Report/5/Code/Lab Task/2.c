/*Display the numbers in the following format:
5
4 4
3 3 3
2 2 2 2
1 1 1 1 1*/
#include <stdio.h>
int main(){
    int a,b=1;
    printf("Please enter a number for make a triangle: ");
    scanf("%d",&a);
    for(int i=a;a>=1;a--){
        for(int j=1;j<=b;j++){
            printf("%d",a);

        }
        b++;
        printf("\n");
    }
    return 0;
}
