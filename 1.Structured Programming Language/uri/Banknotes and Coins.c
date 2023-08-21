#include <stdio.h>

int main() {
        float a,m;
        scanf("%f",&a);
        int b,c,d,e,f,g,h,i,j,k,l;
        b=a/100;
        c=(a-(b*100))/50;
        d=(a-((c*50)+(b*100)))/20;
        e=(a-((d*20)+(c*50)+(b*100)))/10;
        f=(a-((e*10)+(d*20)+(c*50)+(b*100)))/5;
        g=(a-((f*5)+(e*10)+(d*20)+(c*50)+(b*100)))/2;
        h=(a-((g*2)+(f*5)+(e*10)+(d*20)+(c*50)+(b*100)))/1;
        i=(a-((h*1)+(g*2)+(f*5)+(e*10)+(d*20)+(c*50)+(b*100)))/.5;
        j=(a-((i*.5)+(h*1)+(g*2)+(f*5)+(e*10)+(d*20)+(c*50)+(b*100)))/.25;
        k=(a-((j*.25)+(i*.5)+(h*1)+(g*2)+(f*5)+(e*10)+(d*20)+(c*50)+(b*100)))/.10;
        l=(a-((k*.10)+(j*.25)+(i*.5)+(h*1)+(g*2)+(f*5)+(e*10)+(d*20)+(c*50)+(b*100)))/.05;
        m=(a-((l*.05)+(k*.10)+(j*.25)+(i*.5)+(h*1)+(g*2)+(f*5)+(e*10)+(d*20)+(c*50)+(b*100)))/.01;





    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%.0f moeda(s) de R$ 0.01\n",b,c,d,e,f,g,h,i,j,k,l,m);
    return 0;
}
