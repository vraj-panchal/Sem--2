// Write user defined function to compare two string using pointer

#include<stdio.h>

int compare(char *str1 , char *str2)
{
    while(*str1 !='\0' && *str2!='\0')
    {
        if(*str1!=*str2)
        {
            return 0;
        }
        *str1++;
        *str2++;
    }
    if(*str1 == '\0' && *str2 =='\0')
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int main()
{
    char str1[10],str2[10];

    printf("Enter Your Fire String : ");
        scanf("%s",str1);

    printf("Enter Your Secound String : ");
        scanf("%s",str2);


    if(compare(str1,str2))
    {
        printf("String Are Equal \n ");
    }
    else
    {
        printf("String Are Diffrent \n ");
    }

    return 0;
}