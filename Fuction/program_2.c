#include<stdio.h>

int sum();

int sum()
{
    int a,b,s;

    printf("\n Enter Two Number : ");
        scanf("%d %d",&a,&b);

        s=a+b;

        return s;
}

void main()
{
    int result;

        printf("\n Going To Calculate The Sum Of Two Number : ");
            result=sum();

            printf(" Total = %d",result);
}