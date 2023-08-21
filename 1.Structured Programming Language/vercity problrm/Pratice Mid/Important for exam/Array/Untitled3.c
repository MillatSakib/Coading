#include <stdio.h>
#include <stdbool.h>
int main(){
int a[2]={2,3},uni[100],b[6]={5,7,9,2,3,1},j=0,c[100],single[50],count=8;
bool insert=1;
for(int i=0;i<2;i++){
   uni[j]=a[i];
   j++;
}
for(int i=0;i<6;i++){
   uni[j]=b[i];
   j++;
}
for(int i=0;i<8;i++){
    for (int j=0;j<8;j++){
        if(uni[j]>uni[j+1]){
            int temp=uni[j];
            uni[j]=uni[j+1];
            uni[j+1]=temp;
        }
    }
}

for(int i=0;i<8;i++){

 for (int j=0;j<8;j++){
        if(uni[j]==uni[j+1]){
            uni[j]=uni[j+1];
            printf("Condition execudet\n");
        }
 }

}
for(int i=0;i<count;i++){
   printf("%d ",uni[i]);
}

}
