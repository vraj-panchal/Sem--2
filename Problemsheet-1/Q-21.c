// Write a function to calculate a sum of all elements in two dimensional array.

#include<stdio.h>

void input(int size, int arr[size][size] )
{
    int i, j;

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
        printf("Enter value at [%d][%d] : ",i+1,j+1);

            scanf("%d",&arr[i][j]);
         
        }
    }

}

void display(int size, int arr[size][size])
{

    int sum;

     for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            sum=sum+arr[i][j];
        }
        printf("\n");
    }


     for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

}


int main()
{
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    int a[n][n];

    input(n, a);
    display(n, a);

    return 0;
}

