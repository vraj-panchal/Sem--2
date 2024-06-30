// // Write user defined function to sort 2D array using pointer

// #include<stdio.h>

// int main(){
//     int arr1[3][3], arr2[3][3], temp1 = 0, temp2 = 0;
//     int *ptr1 = &arr1[0][0]; // Pointer for arr1
//     int *ptr2 = &arr2[0][0]; // Pointer for arr2

//     // Input
//     printf("Enter values of 1 Array: \n");
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             printf("Enter value at [%d][%d] : ", i + 1, j + 1);
//             scanf("%d", ptr1 + (i * 3 + j)); // Pointer arithmetic to access elements of arr1
//             *(ptr2 + (i * 3 + j)) = *(ptr1 + (i * 3 + j)); // Copying to arr2 using pointers
//         }
//     }

//     // Printing input
//     printf("Data Entered by you: \n");
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             printf("%d\t", *(ptr1 + (i * 3 + j))); // Printing arr1 using pointers
//         }
//         printf("\n");
//     }

//     // Process
//     // Row-wise sorting in Ascending order
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             for(int k = 0; k < 3; k++){
//                 if(*(ptr1 + (i * 3 + j)) < *(ptr1 + (i * 3 + k))){
//                     temp1 = *(ptr1 + (i * 3 + k));
//                     *(ptr1 + (i * 3 + k)) = *(ptr1 + (i * 3 + j));
//                     *(ptr1 + (i * 3 + j)) = temp1;
//                 }
//             }
//         }
//         temp1 = 0;
//     }

//     // Column-wise sorting in Descending order
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             for(int k = 0; k < 3; k++){
//                 if(*(ptr2 + (i * 3 + j)) > *(ptr2 + (i * 3 + k))){
//                     temp2 = *(ptr2 + (i * 3 + k));
//                     *(ptr2 + (i * 3 + k)) = *(ptr2 + (i * 3 + j));
//                     *(ptr2 + (i * 3 + j)) = temp2;
//                 }
//             }
//         }
//         temp2 = 0;
//     }

//     // Output
//     // Row-wise
//     printf("Row-wise sorting in Ascending order: \n");
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             printf("%d\t", *(ptr1 + (i * 3 + j))); // Printing arr1 using pointers
//         }
//         printf("\n");
//     }

//     // Column-wise
//     printf("Column-wise sorting in Descending order: \n");
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             printf("%d\t", *(ptr2 + (i * 3 + j))); // Printing arr2 using pointers
//         }
//         printf("\n");
//     }

//     return 0;
// }




#include <stdio.h>

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

// Function to sort rows of an array in ascending order
void sortRowsAscending(int *ptr, int rows) 
{
    int temp = 0;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            for (int k = 0; k < 3; k++) 
            {
                if (*(ptr + (i * 3 + j)) < *(ptr + (i * 3 + k))) 
                {
                    temp = *(ptr + (i * 3 + k));
                    *(ptr + (i * 3 + k)) = *(ptr + (i * 3 + j));
                    *(ptr + (i * 3 + j)) = temp;
                }
            }
        }
    }
}

// Function to sort columns of an array in descending order
void sortColumnsDescending(int *ptr, int rows) 
{
    int temp = 0;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            for (int k = 0; k < 3; k++) 
            {
                if (*(ptr + (i * 3 + j)) > *(ptr + (i * 3 + k))) 
                {
                    temp = *(ptr + (i * 3 + k));
                    *(ptr + (i * 3 + k)) = *(ptr + (i * 3 + j));
                    *(ptr + (i * 3 + j)) = temp;
                }
            }
        }
    }
}

int main() {
    int arr1[3][3], arr2[3][3];
    int *ptr1 = &arr1[0][0]; // Pointer for arr1
    int *ptr2 = &arr2[0][0]; // Pointer for arr2

    // Input
    printf("Enter values of Array 1: \n");
    inputArray(ptr1);

    // Copying to arr2 using pointers
    for (int i = 0; i < 3 * 3; i++) 
    {
        *(ptr2 + i) = *(ptr1 + i);
    }

    // Printing input
    printf("Data Entered by you: \n");
    printArray(ptr1);

    // Process
    // Row-wise sorting in Ascending order
    sortRowsAscending(ptr1, 3);

    // Column-wise sorting in Descending order
    sortColumnsDescending(ptr2, 3);

    // Output
    // Row-wise
    printf("Row-wise sorting in Ascending order: \n");
    printArray(ptr1);

    // Column-wise
    printf("Column-wise sorting in Descending order: \n");
    printArray(ptr2);

    return 0;
}

