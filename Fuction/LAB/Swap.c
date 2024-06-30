#include<stdio.h>

int swap(int ,int);

int main()
{
    int a,b;

        printf("Enter The Value a And b :\n ");
            scanf("%d %d", &a,&b);

        printf("\n\n Before Swapping : a = %d And b = %d\n",a,b);

        swap(a,b);

        return 0;

}

int swap(int x, int y)
{
    int temp;

        temp=x;
        x=y;
        y=temp;

            printf("\n\n After Swapping : a = %d And b = %d\n",x,y);

}