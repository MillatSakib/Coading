//Write a C program to find second largest element in an array.#include <stdio.h>
int main(){
  int a;
  printf("Plese enter how many element you want: ");
  scanf("%d",&a);
    int b[a+2];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    for (int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(b[j]>b[j+1]){
            int temp;
            temp=b[j];
            b[j]=b[j+1];
            b[j+1]=temp;
            }

        }
    }
 for(int i=a-1;i>=0;i--){
    if(b[i]==b[i-1]){
        a--;
    }

 }
 printf("The second largest number is %d",b[a-2]);
}
