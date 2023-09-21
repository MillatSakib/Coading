#include <stdio.h>
int main()
{
    int x,y;
    float z;
    scanf("%d %d",&x,&y);
    if(x==1)
    {
        z=4.0*y;
      printf("Total: R$ %.2f\n",z);
    }
    else if(x==2)
    {
        z=4.50*y;
      printf("Total: R$ %.2f\n",z);
    }
    else if(x==3)
    {
        z=5.0*y;
      printf("Total: R$ %.2f\n",z);
    }
    else if(x==4)
    {
        z=2.0*y;
      printf("Total: R$ %.2f\n",z);
    }
    else if(x==5)
    {
        z=1.50*y;

      printf("Total: R$ %.2f\n",z);
    }
    return 0;

}
