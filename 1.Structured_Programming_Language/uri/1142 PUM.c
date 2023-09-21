#include <stdio.h>
int main(){
    int integer,print=1;
    scanf("%d",&integer);
    for(int i=0;i<integer;i++){
        printf("%d %d %d PUM",print++,print++,print++);
    }
    return 0;

}
