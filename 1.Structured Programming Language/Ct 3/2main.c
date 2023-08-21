#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(char str[50],int start,int end)
{
    if(start >= end){
    return 0;
    }
    else{
        return ((str[start] == str[end]) && isPalindrome(str,start+1,end-1));
    }
}
int main()
{

    char str_arr[50];
    int len;
    bool palornot;
    printf("Please enter a String for Checking Palindrom: ");
    gets(str_arr);
    len=strlen(str_arr);
    printf("String length is %d\n",len);
    palornot = isPalindrome(str_arr,0,len-1);
    if(palornot == 1)
    printf("Yes, \"%s\" is a Palindrom",str_arr);
    else
    printf("No, \"%s\" isn't a Palindrom",str_arr);
    return 0;
}
