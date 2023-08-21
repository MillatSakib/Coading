//Write a C program to find frequency of each digit in a given integer
#include <stdio.h>
int main(){
    int a;
    int count0=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0;
    printf("Please enter a number for reverse it: ");
    scanf("%d",&a);
    int b;
    for(int i=a;a!=0;i==i){
          b=a%10;
          if(b==0){
            count0++;
          }
          else if(b==1){
            count1++;
          }
          else if(b==2){
            count2++;
          }
          else if(b==3){
            count3++;
          }
          else if(b==4){
            count4++;
          }
          else if(b==5){
            count5++;
          }
          else if(b==6){
            count6++;
          }
          else if(b==7){
            count7++;
          }
          else if(b==8){
            count8++;
          }
          else if(b==9){
            count9++;
          }
          a=a/10;

    }
    printf("0 has %d times.\n1 has %d times.\n2 has %d times.\n3 has %d times.\n4 has %d times.\n5 has %d times.\n",count0,count1,count2,count3,count4,count5);
    printf("6 has %d times.\n7 has %d times.\n8 has %d times.\n9 has %d times.\n",count6,count7,count8,count9);
}
