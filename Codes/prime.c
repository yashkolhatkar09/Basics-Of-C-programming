#include <conio.h>
#include <stdio.h>

int main()
{
    int p = 0, n, i;

    printf("Enter the number : ");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("Not Prime");
            p = 1;
            break;
        }
    }
    if (p == 0)
        printf("prime");
    return 0;
}