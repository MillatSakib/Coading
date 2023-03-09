#include <stdio.h>
int main(){
    int a[3]={1,2,3};
    int b[3]={1,9,13};
    int intersection[100];
    int uni[11];
    int k=0,j=0;

    //Inetersecton Part
    for(int i=0;i<3;i++){
   for(int j=0;j<3;j++){
      if(a[i]==b[j]){
         intersection[k]=a[i];
         k++;
      }
   }

    }

    printf("Intersection of the set is: ");
    for(int i=0;i<k;i++){
        printf("%d ",intersection[i]);
    }
printf("\n");

    //Union Part

    for(int i=0;i<3;i++){
   uni[j]=a[i];
   j++;
}
for(int i=0;i<3;i++){
   uni[j]=b[i];
   j++;
}
    printf("Union of the set is: ");
    for(int i=0;i<j;i++){
        printf("%d ",uni[i]);
    }

    return 0;
}
