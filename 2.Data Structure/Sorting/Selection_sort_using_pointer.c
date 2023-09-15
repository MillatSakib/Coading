#include <stdio.h>

void swap(int *first_element, int *second_element)
{
    int temp = *first_element;
    *first_element = *second_element;
    *second_element = temp;
}

void selection_sort(int *arr[50], int len){
    for(int i=0; i<len;i++){
        int min = i;
        for(int j = i+1; j < len; j++){
            if(*arr[i]>*arr[j]){
                min =j;
            }
        }
        if(min!= i){
            swap(arr[i], arr[min]);
        }
    }
}

int main()
{
    int arr_len, arr[50];
    int *arr_pointer[50];
    printf("Please enter the array length(It must be less than 50): ");
    scanf("%d", &arr_len);
    if (arr_len >= 50)
    {
        printf("Sorry!! You violate rule.");
        return 0;
    }
    printf("Please enter all array Element: ");
    for (int i = 0; i < arr_len; i++)
    {
        scanf("%d", &arr[i]);
        arr_pointer[i] = &arr[i];
    }

    selection_sort(arr_pointer, arr_len);
    printf("The sorted array are: ");
    for (int i = 0; i < arr_len; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}