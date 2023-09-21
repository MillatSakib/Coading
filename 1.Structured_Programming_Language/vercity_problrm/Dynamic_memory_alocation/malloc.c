#include <stdio.h>
#include <stdlib.h>

/*

For using maloc() function you must be include stdlib.h header file because in stdlib.h header file there has parameter of  malloc function and defination of it.

malloc(): ''malloc" or "memory allocation" dynamically allocates a single large block of memory with the specified size.  ---> This the definetin of malloc() function..

or we can told it malloc() funciton allocates requested size of bytes and return a void pointer to the first byte of the allocated memory.

The definetion rule of malloc funciton are given bellow
int *ptr;
ptr = (cast_type*)malloc(byte size);


Here by using malloc function we allocate the space in memory. that's why we should have to give how much memory we want to use. for simplify we can use sizeof() function..

And we have to type cast cust the malloc() funciton because by default the malloc() function return void type pointer. but we type of pointer are not void. That's why we have to type cast it into dclared ponter type datatype so that we can use it.

That's all about malloc function.

Resource:
             https://www.youtube.com/watch?v=6qhOQupEKXQ
             https://www.youtube.com/watch?v=M9D677MoXZg&pp=ygUSbWFsb2MgY2Fsb2MgYmFuZ2xh



*/
int main(){
    int *ptr;
    ptr = (int *)malloc(5*sizeof(int));
    if(ptr == NULL){    //if there have not enough memory in the dynamic memory allocation process then it return null
        printf("Memory not allocated!");

    }
    else{
        printf("Memory allocated sucessfully..");
    }
    return 0;
}
