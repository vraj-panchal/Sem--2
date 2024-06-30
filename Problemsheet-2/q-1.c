#include <stdio.h>

// Ascending Order
void ascendingSort(int *ptr, int size) 
{
    int i, j, temp;

   
    for (i = 0; i < size - 1; i++) 
    {
        for (j = i + 1; j < size; j++) 
        {
            if (*(ptr + i) > *(ptr + j)) 
            {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
}


// Descending Order
void descendingSort(int *ptr, int size) 
{
    int i, j, temp;

    
    for (i = 0; i < size - 1; i++) 
    {
        for (j = i + 1; j < size; j++) 
        {
            if (*(ptr + i) < *(ptr + j)) 
            {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
}

int main() {
    int i, n, a[10];
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

    // Reset the pointer to the beginning of the array
    ptr = &a[0];

    // Call the ascending sorting function
    ascendingSort(ptr, n);

    // Output the sorted Ascending Order array using pointer
    printf("Sorted Array (Ascending): ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", *(ptr + i)); // Access array elements using pointer arithmetic
    }
    printf("\n");

    // Reset the pointer to the beginning of the array
    ptr = &a[0];

    // Call the descending sorting function
    descendingSort(ptr, n);

    // Output the sorted Descending Order array using pointer
    printf("Sorted Array (Descending): ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", *(ptr + i)); // Access array elements using pointer arithmetic
    }
    printf("\n");

    return 0;
}
