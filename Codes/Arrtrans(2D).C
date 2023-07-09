#include<stdio.h>
#include<conio.h>

void main()

{
int arr1[3][3];
int i,j;

clrscr();

printf("Enter the value of your Matrix : \n");

for(i=0;i<3;i++)

	{

for(j=0;j<3;j++)

	{

	scanf("%d",&arr1[i][j]);

	}

	} //taking values//


	printf("The Orignal matrix is : \n");

	for(i=0;i<3;i++)

	{
	    printf("\n");

for(j=0;j<3;j++)

	{

	printf(" %3d", arr1[i][j]);


	}

	} //printing og//


printf("\n\nThe transpose of the Matrix is :\n ");

for(i=0;i<3;i++)

	{
	    printf("\n");

for(j=0;j<3;j++)

	{

	printf(" %3d", arr1[j][i]);

	}

	} //printing//



	getch();

}



