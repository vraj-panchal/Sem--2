// Write user defined function to print Fibonacci series using recursion


#include<stdio.h>

int fibonacci(int);

int main()
{
    int n, f;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    f = fibonacci(n);

    printf("%d", f);

    return 0;
}

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}