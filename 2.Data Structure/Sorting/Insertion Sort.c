/*This programme is made by me... The main thory of bubble short is comparisn two number ..... if a[0]<a[1]
then we swap the value.In anothger codition..we don't swap the value...The time complexity of
this data structure is O(n*n)..It is the main theory...
You can learn from this link bellow
https://www.youtube.com/watch?v=aBi8ptRBWY8&ab_channel=TamimShahriar
https://www.youtube.com/watch?v=RcCjJAMyfnQ&ab_channel=AndrostockDev
https://www.youtube.com/watch?v=iQNZAOw67zM&ab_channel=FarhanHossan
https://www.youtube.com/watch?v=uL4Nvg95ji0&t=11s&ab_channel=BanglaCodingTutor
https://www.youtube.com/watch?v=3vtKu8hSFPE&ab_channel=BanglaCodingTutor
*/
#include <stdio.h>
void insertion_sort(int len,int arr[len]){
        int temp,j;
        for(int i=1;i<len;i++){
            temp=arr[i];
            for(j=i-1;j>=0 && arr[j]>temp;j--){
                arr[j+1]=arr[j];
            }
            arr[j+1]=temp;
        }

        printf("The sorted array are: ");
        for(int i=0;i<len;i++){
            printf("%d  ",arr[i]);
        }
}





int main(){
    int len;
    printf("Please enter length of array: ");
    scanf("%d",&len);
    int arr[len+2];
    printf("Please enter array element: ");
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    insertion_sort(len,arr);
    return 0;
}