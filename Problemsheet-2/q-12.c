// Write user defined function to reverse string using pointer.

#include<stdio.h>

void reverse(char*str)
{
    char temp;
    char *start=str;
    char *end=str;

    while(*end!='\0')
    {
        end++;
    }
    end--;

    while(start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;

        *start++;
        *end--;

    }
}


int main()
{
    char str[100];

    printf("Enter Your String : ");
        scanf("%s",str);

        reverse(str);

        printf("Reverse String : %s\n ",str);
}