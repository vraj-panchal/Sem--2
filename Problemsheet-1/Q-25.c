// Write a function to print following pattern for number N.


#include<stdio.h>

int input(int n)
{
    int i,k,j;

        for(i=1 ; i<=n ; i++)
        {
            for(j=1  ; j<=n-i ; j++)
            {
                printf(" ");
            }
                for(k=1 ; k<=2*i-1 ; k++)
                {
                    printf("%d",k);
                }

                printf("\n");
            
        }
}

int main()
{
    int n;

        printf("Enter The Value A : ");
            scanf("%d",&n);

            input(n);


        return 0;

            
}