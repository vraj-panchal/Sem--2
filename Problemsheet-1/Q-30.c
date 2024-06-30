// Write user defined function calculate power of number n using recursion.

#include<stdio.h>




long power(int a ,int b)
{
    if(b==0)
    {
        return 1;
    }
    else
    {
        return a*power(a,b-1);
    }
    
}

int main()
{
   int a,b;

    printf("Enter The value a :");
        scanf("%d",&a);

    printf("Enter The POWER value b : ");
        scanf("%d",&b);

       int result=power(a,b);

       printf("%d ^ %d = %d ",a,b,result);

        return 0;
}