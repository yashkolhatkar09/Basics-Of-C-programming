#include<stdio.h>
#include<conio.h>

void main()

{
int m, n, i, pro ;

clrscr();

printf("Enter the Number here : ");
scanf("%d",&m);

printf("\nEnter any Number Here : ");
scanf("%d",&n);

clrscr();

for(i=1;i<=n;i++)
{
pro= m*i;

printf("%d * %d = %d ",m,i,pro);

printf("\n");

}

getch();

}