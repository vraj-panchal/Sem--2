//  Write user defined functions to reverse 2D array using pointer.
 
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

// Function to reverse the array
void reverseArray(int *ptr) {
    int *start = ptr; // Pointer to the beginning of the array
    int *end = ptr + 8; // Pointer to the end of the array (assuming 3x3 array)

    while (start < end) {
        // Swap elements
        int temp = *start;
        *start = *end;
        *end = temp;

        // Move pointers towards the middle
        start++;
        end--;
    }
}

int main() {
    int arr1[3][3];
    int *ptr1 = &arr1[0][0]; // Pointer for arr1
    

    // Input
    printf("Enter values of Array 1: \n");
    inputArray(ptr1);

    // Reverse the array
    reverseArray(ptr1);

    // Printing reversed array
    printf("\nReversed Array: \n");
    printArray(ptr1);
    
    return 0;
}
