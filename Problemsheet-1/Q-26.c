//  Write user defined function to calculate factorial of a given number using recursion.

#include<stdio.h>

int fact(int);

int main()
{
    int n,f;

        printf("Enter The Number Whose fsctorial You Want To calculate : ");
            scanf("%d",&n);

        f=fact(n);

        printf("Factorial = %d",f);
}

int fact(int n)
{
       if(n==0)
       {
        return 0;
       }
       else if(n==1)
       {
        return 1;
       }
       else
       {
        return n*fact(n-1);
       }
}