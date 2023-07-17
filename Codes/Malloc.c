#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()

{
    int *ptr;
    int i, n;

    system("cls");

    printf("How Many values : ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    printf("The current Values are : ");

    for (i = 0; i < n; i++)
    {

        printf("\n#%d Number is :", i + 1);
        printf(" Location = %u,  Value = %d ", &ptr[i], ptr[i]);

        printf("\n");

    } // printing Initial Values

    for (i = 0; i < n; i++)

    {

        printf("\nEnter the Value of # %d : ", i + 1);

        scanf("%d", &ptr[i]);

    } // scanning new

    printf("\nThe New Values are : ");

    for (i = 0; i < n; i++)

    {
        printf("\nLoction : %u , Values : %d\n ", &ptr[i], ptr[i]);

    } // printing new
}