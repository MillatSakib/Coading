#include <stdio.h>
#include <stdlib.h>
/*
calloc() function are almost similler to the malloc() function. Only the defference is malloc() function take only one argument but calloc takes two argument 

The rule to define calloc() function are given bellow
int *ptr;
ptr = (cast-type*)calloc(n, element_size);

calloc(): "calloc" or "contiguous allocation" dynamically allocates the specified number of blocks of memory of the specified type.

or, we can told it calloc() funciton allocates space for an array of elements, initializes them to zero and then returns a void pointer to the memory.


        ******Difference between malloc() and calloc()******
        
Initialization:
malloc() allocates memory block of given size(in bytes) and returns a pointer to the begining of the block. malloc() doesnot initialize hte allocated memory. if we try access the content of memory block(before initializing) then we'll segmentation fault error(or may be garbage values)

calloc() allocates the memory and also initializes the alocated memory block to zero if we try to access the content of these blolcks then we'll get 0


*/

int main(){
    int *ptr;
    ptr = (int *)calloc(5,sizeof(int));
    if(ptr == NULL){
        printf("Memory not allocated!");

    }
    else{
        printf("Memory allocated sucessfully..");
    }
    return 0;
}
