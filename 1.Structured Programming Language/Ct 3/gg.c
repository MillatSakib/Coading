#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool is_PalRec(char str[],int s, int e)
{
	if (s == e)
	return 1;
	if (str[s] != str[e])
	return 0;
	if (s < e + 1)
	return is_PalRec(str, s + 1, e - 1);
	return 1;
}
bool is_Palindrome(char str[])
{
int n = strlen(str);
if (n == 0)
	return 1;
return is_PalRec(str, 0, n - 1);
}
int main()
{
	char str[100],count=0;
	printf("Please enter a String for checking Palindrom: ");
	scanf("%s",str);
	if (is_Palindrome(str))
	printf("Yes\n");
	else
	printf("No\n");
    printf("There has ");

for (int i = 0; i < strlen(str); i++)
    {
        int flag = 0;
        for (int j = 0; j < strlen(str); j++)
        {
            if (str[i] == str[j] && i != j){
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            count++;
    }

    printf("%d distinct charecter/s.",count);
	return 0;
}
