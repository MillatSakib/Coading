/*Write a C Program to display your Id, Name, Dept. Name and
University Name followed by a newline.*/


#include <stdio.h>
#include <string.h>
int main(){
    int a;
    char b[100];
    char c[20];
    char d[100];

    printf("Please enter your id: ");
    scanf("%d",&a);
    printf("Please enter your Name: ");
    fflush(stdin);
    gets(&b);
    printf("Please enter your Dept. Name: ");
    fflush(stdin);
    gets(&c);
    printf("Please enter your University Name: ");
    fflush(stdin);
    gets(&d);
    printf("\nYour name is %s & your ID is %d. Your are read in %s in Dept. of %s\n",b,a,d,c);
}

