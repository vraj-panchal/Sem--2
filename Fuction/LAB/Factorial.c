// #include<stdio.h>        // Without Argument .. Without Return Type

// int factorial();

// int factorial()
// {
//     int n,i,fact=1;

//     printf("\n Enter The Number : ");
//         scanf("%d",&n);

//         for(i=1 ; i<=n ; i++)
//         {
//             fact=fact*i;
//         }

//         printf(" Factorial %d %d",n,fact);


// }

// int main()
// {
//     factorial();
//     factorial();
//     factorial();
//     factorial();
//     factorial();
// }

#include<stdio.h>       //// Without Argument... With Return Type

int factorial();

int factorial()
{
    int n,i,fact=1;

    printf("\n Enter The Number : ");
        scanf("%d",&n);


        for(i=1 ; i<=n ; i++)
        {
            fact=fact*i;

        }

       
        return fact;

}

int main()
{
    int result;

    result=factorial();
         printf("%d",result);
    result=factorial();
         printf("%d",result);
    result=factorial();
         printf("%d",result);
    result=factorial();
         printf("%d",result);
}