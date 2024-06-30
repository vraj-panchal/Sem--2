// Write user defined function to concatenate two string using pointer

#include<stdio.h>

int concatenate(char *str1 , char *str2 )
{
    while(*str1)
    {
        str1++;
    }

    while(*str2)
    {
        *str1=*str2;
        str1++;
        str2++;
    }

    *str1='\0';
}

int main()
{
    char str1[100],str2[100];

    printf("Enter Your Fire String : ");
        scanf("%s",str1);

    printf("Enter Your Secound String : ");
        scanf("%s",str2);

        concatenate(str1,str2);

        printf("Concatenate : %s",str1);

}