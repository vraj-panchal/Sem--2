// Write a function to calculate sum of digits in the number N.

#include<stdio.h>

int sum(int n)
{
    int  sum=0,digit;

    while(n!=0)
    {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    return sum;
}

int main()
{
    int n,ans;

    printf("Enter N : ");
        scanf("%d",&n);

        ans=sum(n);

        printf("%d",ans);

    return 0;

}