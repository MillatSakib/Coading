#include <stdio.h>
#include <ctype.h>
#define size 100

int arr[size];
int topIndex = -1;

void addToStack(int val)
{
    if (topIndex == size - 1)
    {
        printf("Stack is full\n");
        return;
    }
    topIndex++;
    arr[topIndex] = val;
}

int removeFromStack()
{
    if (topIndex == -1)
    {
        printf("Stack is empty\n");
        return -1;
    }
    int poppedVal = arr[topIndex];
    topIndex--;
    return poppedVal;
}

int doMath(int num1, int num2, char op)
{
    if (op == '+')
        return num1 + num2;
    if (op == '-')
        return num1 - num2;
    if (op == '*')
        return num1 * num2;
    if (op == '/')
        return num1 / num2;
    return 0;
}

int solvePostfix(char *expr)
{
    for (int i = 0; expr[i] != '\0'; i++)
    {
        char currentChar = expr[i];

        if (isdigit(currentChar))
        {
            addToStack(currentChar - '0');
        }
        else
        {
            int secondNum = removeFromStack();
            int firstNum = removeFromStack();
            int result = doMath(firstNum, secondNum, currentChar);
            addToStack(result);
        }
    }

    return removeFromStack();
}

int main()
{
    char expr[] = "73*4+";
    int finalAnswer = solvePostfix(expr);
    printf("Postfix result of \"%s\" is: %d\n", expr, finalAnswer);

    return 0;
}
