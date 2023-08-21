#include<stdio.h>
int main()
{
    char s[50];
    fflush(stdin);
    gets(&s);
    int i=0;
    int d=0,a=0,sc=0;
    while (s[i]!='\0')
    {
     if ((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
     {
         a++;
     }
     else if (s[i]>=0 && s[i]<=9)
     {
         d++;
     }
     else
        sc++;
        i++;
    }
    printf("Digit = %d\nAlphabet = %d\nSpecial Character = %d",d,a,sc);
    return 0;
}
