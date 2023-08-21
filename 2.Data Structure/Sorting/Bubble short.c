/*This programme is made by me... The main thory of bubble short is comparisn two number ..... if a[0]<a[1]
then we swap the value.In anothger codition..we don't swap the value...The time complexity of
this data structure is O(n*n)..It is the main theory...
You can learn from this link bellow
https://www.youtube.com/watch?v=8_dNVUm29K0&t=443s&ab_channel=BanglaCodingTutor
https://www.youtube.com/watch?v=PbbC4FZQia4&t=128s&ab_channel=FarhanHossan
https://www.youtube.com/watch?v=ZUI0VQ9JvDw&t=5s&ab_channel=TamimShahriar
*/

#include <stdio.h>

void bubble_sort(int a, int b[a]){
    int ok;
    for(int i=0;i<a-1;i++){
    ok=0;
        for(int j=0;j<a-1-i;j++){
            if(b[j]>b[j+1]){
                int x;
                x=b[j];
                b[j]=b[j+1];
                b[j+1]=x;
                ok++;
            }
        }
        if(!ok){
        break;
    }
    }
    printf("The sorted Number is: ");
    for(int i=0;i<a;i++){
        printf("%d  ",b[i]);
    }

}


int main(){
    int a=0;
    printf("Please enter the number how many number you want to get as input: ");
    scanf("%d",&a);
    int b[a];
    printf("Please enter array element: ");
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }

    bubble_sort(a,b);
}

