//  Write user defined function to check whether a given number is Armstrong number or not using pointer.




#include<stdio.h>

int Armstrong(int *num)
{
    int n,d,c=0,sum=0;

    n=*num;

    while(n!='\0')
    {
        d = n % 10;
        c = d * d * d;
        sum=sum+c;
        
        n=n/10;
    }

    if(sum==*num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;

        printf("Enter Your Number : ");
            scanf("%d",&num);

        if(Armstrong(&num))
        {
            printf("%d is an Armstrong Number.\n",num);
        }
        else
        {
            printf("%d is NOt Armstrong Number. \n",num);
        }

    return 0;
}