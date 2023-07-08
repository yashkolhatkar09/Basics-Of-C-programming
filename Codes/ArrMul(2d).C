#include<stdio.h>
#include<conio.h>

void main()

{
int arr1[3][3], arr2[3][3], pro[3][3];
int i, j, k;

clrscr();

printf("Enter the value of your First Matrix : \n " );


for(i=0; i<3; i++)
{
	  for(j=0; j<3;j++)
	 {
		  scanf("%d",&arr1[i][j]);
	 }

}





	 printf("Enter the value of your Second Matrix : \n " );



for(i=0; i<3; i++)
{
	  for(j=0; j<3;j++)
	  {
	    scanf("%d",&arr2[i][j]);

	  }
} //Arr2//


for(i=0; i<3; i++)

	{

for(j=0; j<3; j++)

	{

	pro[i][j];

for(k=0; k<3; k++)
	{
	  pro[i][j]+ = arr1[i][k] * arr2[k][j];

	}
	}
	} //Calculation//



	printf("The Product of Matrix is :\n ");

for(i=0; i<3; i++)
{

	 printf("\n");

       for(j=0; j<3; j++)
	{

	 printf(" %3d ",pro[i][j]);

	}
}//printing//

getch();

}



