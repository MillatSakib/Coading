#include <stdio.h>

int main()
{
    const int a = 5;
    int arr[] = {30, 41, 21, 10, 55};
    int arr2[5];
    int temp[a];


    for (int i = 0; i < 5; i++)
    {
        temp[i] = arr[i] % 10;
    }
 

    for (int i = 0; i < a - 1; i++)
    {
        for (int j = 0; j < a - 1 - i; j++)
        {
            if (temp[j] > temp[j + 1])
            {
                int x;
                x = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = x;
            }
        }
    }






    int index = 0;

    for (int i = 0; i < a; i++)
    {
        for (int j = index; j < a; j++)
        {
            if (arr[j] % 10 == temp[index])
            {
                int temp = arr[j];
                for (int k = j; k > index; k--)
                {
                    arr[k] = arr[k - 1];
                }
                arr[index] = temp;
                index++;
            }
        }
    }





    for (int i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
}


