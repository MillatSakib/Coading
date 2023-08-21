#include <stdio.h>

void unique_num(int arr[20],int count){
int count1=0;
int arr1[10]={0,0,0,0,0,0,0,0,0,0};
for(int i =0; i<10;i++){
        int count2=0;
        for(int j=0;j<count;j++){
            if(arr[j]==i){
                count2++;

            }

        }
        if(count2==1){
                arr1[count1]=i;
                count1++;
            }
}
if(count1>0){
printf("\n\nThe unique number's are: ");
for(int i=0;i<count1;i++){
    printf("%d  ",arr1[i]);
}
printf("\n\n");
}

else{

    printf("\n\nThere have no unique Number!\n\n");
}

}

void frequency(int arr[20],int count){

int arr1[10]={0,0,0,0,0,0,0,0,0,0};
for(int i =0; i<count;i++){
        for(int j=0;j<10;j++){
            if(arr[i]==j){

                arr1[j]++;
            }
        }



}

for(int j=0;j<10;j++){
            if(arr1[j]>0){
                printf("Frequecy of %d is %d \n",j,arr1[j]);
            }
            }

}

int sum_id_digit(int sum[],int loopcount){
    int rsum=0;
    for(int i=0;i<loopcount;i++){
        rsum+=sum[i];
    }
    return rsum;

}




int primecheck(int prime_or_not){
    int count=0;
    if(prime_or_not>=2){

for(int i=2;i<prime_or_not;i++){
    if(prime_or_not%i==0){
        count++;
    }

}
return count;
    }
    else{
        return 500;
    }

}




int prime_print(int arrprime[20],int pcount){
    int count;
for(int i=0;i<pcount;i++){
        if(primecheck(arrprime[i])==0){

           count++;
          // printf("%d\n",arrprime[i]);
        }
    }
    return count;
}





int main(){
     int id,idcpy,arr[20],count=0;
     printf("Please enter your ID: ");
     scanf("%d",&id);
     idcpy=id;
     while(idcpy!=0){
        arr[count]=idcpy%10;
        idcpy/=10;
        count++;
     }

     printf("Your id is(print using array): ");
     for(int i=0;i<count/2;i++){
        int temp;
        temp=arr[i];
        arr[i]=arr[(count-1)-i];
        arr[(count-1)-i]=temp;
     }

     for(int i=0;i<count;i++){      //Answer of 1(a)
        printf("%d",arr[i]);
     }


     printf("\n\nThe summission sum of all digit are:%d.\n\n",sum_id_digit(arr,count));     ////Answer of 1(b)

     printf("The number of prime digits are %d.\n\n",prime_print(arr,count));     //Answer of 1(c)
     frequency(arr,count);     //Answer of 1(d)
     unique_num(arr,count);


     return 0;
}
