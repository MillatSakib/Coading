#include <stdio.h>
int main()
{
    int a,b;
    do{
    scanf("%d",&a);
    int fstpos=0,lstpos=a-1;
    int arr[a];
    b=a;
    for(int i=0;i<a;i++){
        if(i>0 && i<a-1){
            arr[i]=3;
        }
        else if(i==0){
            arr[i]=1;
        }
        else{
            arr[i]=2;
        }
    }
    for(int i=0;i<a;i++ ){
        printf("%d",arr[i]);
    }
    printf("\n");
    for(int i=0;i<b-1;i++)
    {
        int temp;
        temp=arr[fstpos];
        arr[fstpos]=arr[fstpos+1];
        arr[fstpos+1]=temp;
        fstpos++;
        if(fstpos==lstpos){
            goto print;
        }
        temp=arr[lstpos];
        arr[lstpos]=arr[lstpos-1];
        arr[lstpos-1]=temp;
        print:
        lstpos--;
        for(int j=0;j<b;j++ ){
        printf("%d",arr[j]);
    }
     printf("\n");
    }
    }
    while(a);
	return 0;
}
