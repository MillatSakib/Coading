/*This programme is made by me... The main thory of bubble short is comparisn two number ..... if a[0]<a[1]
then we swap the value.In anothger codition..we don't swap the value...The time complexity of
this data structure is O(n*n)..It is the main theory...
You can learn from this link bellow
https://www.youtube.com/watch?v=epHw58Kz0Pg&ab_channel=FarhanHossan
https://www.youtube.com/watch?v=qHmByz1YvQs&ab_channel=TamimShahriar
https://www.youtube.com/watch?v=jPcvpB-OC_E&ab_channel=BanglaCodingTutor
https://www.youtube.com/watch?v=-DgfiZ68WGM&ab_channel=BanglaCodingTutor
*/
#include <stdio.h>


void selection_sort(int len,int arr[len]){
    int i,j,index_min,temp;
    for(i=0;i<len-1;i++){
        index_min=i;
        for(j=i+1;j<len;j++){
            if(arr[j]<arr[index_min]){
                index_min=j;
            }
        }
        if(index_min!=i){
            temp=arr[i];
            arr[i]=arr[index_min];
            arr[index_min]=temp;
        }
    }
    printf("The sorted array are:  ");
    for(int i=0;i<len;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
}


int main(){
    int len;
    printf("Please enter array length: ");
    scanf("%d",&len);
    int arr[len+2];
    printf("Please enter array element: ");
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    selection_sort(len,arr);
    return 0;
}