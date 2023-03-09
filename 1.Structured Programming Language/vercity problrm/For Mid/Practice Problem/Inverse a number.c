
#include<stdio.h>
int main()
{
int a,b=0,e,f,g;
float c;
printf("Enter a integer value: ");
scanf("%d",&a);
for(int i=0;i<10;i++){
b=a%10;
printf("%d",b);
e=a/10;
//printf("Value of e %d\n",e);
a=e;
//printf("Value of b %d\n",b);
if(a==0){
    break;
}

}
}
