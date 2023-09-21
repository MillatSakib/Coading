#include <stdio.h>
int power(int a,int b){
    int c=1;
    for(int i=0;i<b;i++){
        c=c*a;
    }
    return c;
}
int main() {
  int n,c=1,fd,ld,t,s;
   printf("Enter any number: ");
    scanf("%d",&n);
    t=n;
    ld=t%10;
  while(t>=10)
    {
        t=t/10;
        c++;
    }
    fd=t;
    printf("digit= %d\n",c);
    s=(ld*power(10,c-1)+fd)+(n-(fd*power(10,c-1)+ld));
    printf("%d is swapped to %d\n",n,s);
    return 0;
}
