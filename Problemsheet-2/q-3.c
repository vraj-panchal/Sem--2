// Write user defined function to calculate a sum of all 1D array elements using a pointer

#include<stdio.h>

int sum(int *ptr , int size)
{
    int i ,sum=0 ;

    for(i=0 ; i<size ; i++)
    {
        sum=sum+(*ptr);
        ptr++;
    }

    return sum;
}

int main()
{
    int i, n, a[10],result;
    int *ptr;

    ptr = &a[0]; // Assign the pointer to the first element of the array

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input elements into the array using pointer
    for (i = 0; i < n; i++) 
    {
        printf("Enter Element [%d]: ", i + 1);
        scanf("%d", ptr);
        ptr++; // Move the pointer to the next element
    }

    

     result=sum(&a, n);

     printf("%d",result);

     return 0;
}