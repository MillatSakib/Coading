#include <stdio.h>

int main() {

    int N;
    scanf("%d",&N);
    int a,b,c;
    a=N/365;
    b=(N-(a*365))/30;
    c=N-((a*365)+(b*30));
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",a,b,c);
    return 0;
}
