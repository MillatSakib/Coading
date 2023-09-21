#include <stdio.h>

int main() {

    int N;
    scanf("%d",&N);
    int a,b,c;
    a=N/3600;
    b=(N-(a*3600))/60;
    c=N-((a*3600)+(b*60));
    printf("%d:%d:%d\n",a,b,c);
    return 0;
}
