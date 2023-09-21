#include <stdio.h>
#include <stdlib.h>



//free() function frees previously allocated space




int main(){
    int *ptr;
    ptr = (int *)calloc(5,sizeof(int));
    if(ptr == NULL){
        printf("Memory not allocated!");

    }
    else{
        printf("Memory allocated sucessfully..");
        
        //perform some task here
        
        free(ptr);
        //after perfoming task then we will free the merory space
        
        
    }
    return 0;
}
