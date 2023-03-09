//18.-> separte the odd and even numbers from an array and put it in other arrays called odd and even
#include <stdio.h>
int  main(){
    int a,evencount=0,oddcount=0;
    printf("Please enter Number how many number you want to get as input");
    scanf("%d",a);
    int b[a],even[a],odd[a];
    printf("Please enter All Number");
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
        if(a%2==0){
            b[a]=even[evencount];
            evencount++;
        }
        else{
            b[a]=odd[oddcount];
            oddcount++;
        }

    }
}
