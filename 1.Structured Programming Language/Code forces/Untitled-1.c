#include<stdio.h>
int main()
{
    char t;
    int count=0;
    double arr[12][12],sum=0,avg;
   scanf(" %c",&t);
   for(int i=0;i<12;i++){
    for(int j=0;j<12;j++){
    scanf("%lf",&arr[i][j]);
    if((j>11-i)&& (i<6)){
        sum+=arr[i][j];
        count++;
    }
    else if((i>5)&&(j>i)){
        sum+=arr[i][j];
        count++;
    }
   }
   }
     avg=sum/(float)count;
    switch(t){
        case 'S':
        printf("%.1f\n",sum);
        break;
        case 'M':
        printf("%.1f\n",avg);
        break;
    }

    return 0;
}