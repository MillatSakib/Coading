#include <stdio.h>
int fibonacci_fun(int num)
{
    if(num == 0){
        return 0;
    }
    else if(num == 1){
        return 1;
    }
    else {
        return fibonacci_fun(num-1) + fibonacci_fun(num-2);
    }
}
int main()
{
    int num;
    int fibonacci_var;
    printf("Enter any number to find nth fiboacci term: ");
    scanf("%d", &num);

    fibonacci_var = fibonacci_fun(num);

    printf("%d fibonacci term is %d", num, fibonacci_var);

    return 0;
}


