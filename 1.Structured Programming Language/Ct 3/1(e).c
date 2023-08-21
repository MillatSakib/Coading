#include <stdio.h>
#include <conio.h>
int main(){

    int niton=10;
    printf("\nOutside the block niton=%d.",niton);
    //if(niton<=10)
        {
        int niton=20;
        printf("\n Inside the block niton = %d.",niton);

    }
    printf("\n At the end niton is %d.",niton);
    getch();
    return 0;

}
