#include<stdio.h>

void input_output(int *,int );
int prime(int *,int );

int main()
{
    int n;
    printf("Enter size of array = ");
    scanf("%d",&n);

    int a[n];
    input_output(&a[0],n);
    int res=prime(&a[0],n);
    printf("\nThere are  %d prime numbers in array.",res);
    return 0;
}

void input_output(int *p,int n)
{
    int i;
    printf("Enter the array elements.\n");
    for(i=0;i<n;i++){
        scanf("%d",&*(p+i));
    }

    printf("Your array elements =");
    for(i=0;i<n;i++){
        printf("%d ",*(p+i));
    }
    return ;
}

int prime(int *p,int n)
{
    int i,j,cont,sum=0;
    printf("\n");
    for(i=1;i<=n;i++)
    {
        cont=0;
        for(j=1;j<=i;j++)
        {
            if(i % j == 0)
            {
                cont++;
            }
        }
        if(cont==2)
        {
           
            sum+=1;
        }
        
    }
    return sum;
}