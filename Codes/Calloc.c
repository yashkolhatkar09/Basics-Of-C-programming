#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{

    int *ptr;
    int i, n;

    system("cls");

    printf("How many Values : ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    printf("Current Values are: \n");

    for (i = 0; i < n; i++)
    {

        printf("#%d Number is :", i + 1);
        printf(" Location %u , Value = %d \n ", &ptr[i], ptr[i]);

        printf("\n");

    } // printingInitial Values

    for (i = 0; i < n; i++)
    {
        printf("Enter %d value : ", i + 1);
        scanf("%d", &ptr[i]);

        printf("\n");
    } // Taking in New

    // system("cls");

    printf("The New Values are : ");

    for (i = 0; i < n; i++)
    {

        printf("\n#%d Number is :", i + 1);

        printf(" Location : %u,   Value : %d ", &ptr[i], ptr[i]);

    } // printing New

    ptr = realloc(ptr, 10);

    free(ptr);
}