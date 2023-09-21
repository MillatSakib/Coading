#include <stdio.h>
#include <stdlib.h>

//realloc() function modifies the size of previously allocated space.

int main(){
    int *ptr;
    ptr = (int *)calloc(5,sizeof(int));
    if(ptr == NULL){
        printf("Memory not allocated!");

    }
    else{
        printf("Memory allocated sucessfully..\n");

        ptr = realloc(ptr, 50);
        printf("Memory reallocated successfully.\n");


    }
    return 0;
}
