// Write user defined function to copy one string into another using pointer
#include<stdio.h>

int copy(char *ptr1, char *ptr2) 
{
    while(*ptr1 != '\0') 
    {
        *ptr2 = *ptr1;
        ptr1++;
        ptr2++;
    }
    *ptr2 = '\0';
    return 0;
}

int main() {
    char str1[20], str2[20];

    printf("Enter Your First String: ");
    scanf("%s", str1);

    copy(str1, str2);

    printf("Copied String: %s\n", str2);
 
    return 0;
}
