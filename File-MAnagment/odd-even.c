#include<stdio.h>

int main()
{
    FILE *fp;
    FILE *fe;
    FILE *fo;

    int size, n, i;

    fp = fopen("number.txt", "a");

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &size);
        fprintf(fp, "%d\n", size);
    }
    fclose(fp);

    fp = fopen("number.txt", "r");
    fe = fopen("even.txt", "a");
    fo = fopen("odd.txt", "a");

    while(fscanf(fp, "%d", &size) != EOF)
    {
        if(size % 2 == 0)
        {
            fprintf(fe, "%d\n", size);
        }
        else
        {
            fprintf(fo, "%d\n", size);
        }
    }

    fclose(fp);
    fclose(fe);
    fclose(fo);

    fp = fopen("number.txt", "r");
    fe = fopen("even.txt", "r");
    fo = fopen("odd.txt", "r");

    printf("Numbers: ");
    while(fscanf(fp, "%d", &size) != EOF)
    {
        printf("%d ", size);
    }
    printf("\n");

    printf("Even numbers: ");
    while(fscanf(fe, "%d", &size) != EOF)
    {
        printf("%d ", size);
    }
    printf("\n");

    printf("Odd numbers: ");
    while(fscanf(fo, "%d", &size) != EOF)
    {
        printf("%d ", size);
    }
    printf("\n");

    fclose(fp);
    fclose(fe);
    fclose(fo);

    return 0;
}
