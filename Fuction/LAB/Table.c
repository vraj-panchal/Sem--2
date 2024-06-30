#include<stdio.h>      // Without Argument .. Without Return Type 

int table();

int table()

{
    int n, i;

    printf("\n Enter The Number : ");
        scanf("%d",&n);

        for(i=1 ; i<=10 ; i++)
        {
            printf("%d * %d = %d\n",n,i,n*i);
        }

        
}

int main()
{

   table();
   table();
   table();
   table();
   table();
       
       return 0;
}

