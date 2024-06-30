// // Write user defined functions to add, subtract, multiply and transpose two matrix using pointer.
#include<stdio.h>

// Function to input values into an array
void inputArray(int *ptr) 
{
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("Enter value at [%d][%d] : ", i + 1, j + 1);
            scanf("%d", ptr + (i * 3 + j)); // Pointer arithmetic to access elements of the array
        }
    }
}

// Function to print values of an array
void printArray(int *ptr) 
{
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("%d\t", *(ptr + (i * 3 + j))); // Printing array using pointers
        }
        printf("\n");
    }
}

// Function to calculate the sum of matrix elements
int sum(int *ptr)
{
    int i, j, sum = 0;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            sum += *(ptr + (i * 3 + j));
        }
    }

    return sum;
}

int main() {
    int arr1[3][3], arr2[3][3];
    int *ptr1 = &arr1[0][0]; // Pointer for arr1
    

    // Input
    printf("Enter values of Array 1: \n");
    inputArray(ptr1);

    // Calculate and print sum
    printf("Sum of the elements: %d\n", sum(ptr1));
   
    // Printing input
    printf("Data Entered by you: \n");
    printArray(ptr1);
    
    return 0;
}





// #include<stdio.h>

// // Function to input values into an array
// void inputArray(int *ptr) 
// {
//     for (int i = 0; i < 3; i++) 
//     {
//         for (int j = 0; j < 3; j++) 
//         {
//             printf("Enter value at [%d][%d] : ", i + 1, j + 1);
//             scanf("%d", ptr + (i * 3 + j)); // Pointer arithmetic to access elements of the array
//         }
//     }
// }

// // Function to print values of an array
// void printArray(int *ptr) 
// {
//     for (int i = 0; i < 3; i++) 
//     {
//         for (int j = 0; j < 3; j++) 
//         {
//             printf("%d\t", *(ptr + (i * 3 + j))); // Printing array using pointers
//         }
//         printf("\n");
//     }
// }

// // Function to calculate the sum of matrix elements
// int sum(int *ptr, int option)
// {
//     int i, j, totalSum = 0;

//     if (option == 0) { // row-wise sum
//         for(i = 0; i < 3; i++)
//         {
//             int rowSum = 0;
//             for(j = 0; j < 3; j++)
//             {
//                 rowSum += *(ptr + (i * 3 + j));
//             }
//             printf("Sum of elements in row %d: %d\n", i + 1, rowSum);
//             totalSum += rowSum;
//         }
//     } else if (option == 1) { // column-wise sum
//         for(j = 0; j < 3; j++)
//         {
//             int colSum = 0;
//             for(i = 0; i < 3; i++)
//             {
//                 colSum += *(ptr + (i * 3 + j));
//             }
//             printf("Sum of elements in column %d: %d\n", j + 1, colSum);
//             totalSum += colSum;
//         }
//     }

//     return totalSum;
// }

// int main() {
//     int arr1[3][3];
//     int *ptr1 = &arr1[0][0]; // Pointer for arr1
    

//     // Input
//     printf("Enter values of Array 1: \n");
//     inputArray(ptr1);

//     // Calculate and print row-wise sum
//     printf("Row-wise sums:\n");
//     int rowSum = sum(ptr1, 0);
//     printf("Total row-wise sum: %d\n", rowSum);

//     // Calculate and print column-wise sum
//     printf("\nColumn-wise sums:\n");
//     int colSum = sum(ptr1, 1);
//     printf("Total column-wise sum: %d\n", colSum);
   
//     // Printing input
//     printf("\nData Entered by you: \n");
//     printArray(ptr1);
    
//     return 0;
// }
