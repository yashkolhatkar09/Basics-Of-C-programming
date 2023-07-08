
#include<stdio.h>
#include<conio.h>
void main()
{
int arr1[3][3];
int arr2[3][3];
int sum[3][3];
int i, j, m, n;

printf("Enter the Number of Rows : ");
scanf("%d",&n);

printf("Enter the Number of Columns : ");
scanf("%d",&m);



printf("\nEnter the elements 1st Matrix  of  : \n");


for(i=0; i<n; i++)

{

for(j=0; j<m; j++)

{
	scanf("%d",&arr1[i][j]);

}

} //Taking Values for 1st Matrix//




printf("\nEnter the elements in 2nd Matrix : \n");

for(i=0; i<n; i++)
{

for(j=0; j<m; j++)

{
	scanf("%d",&arr2[i][j]);

}

} //Taking Values for 2nd Matrix//

for(i=0; i<n; i++)
{
for(j=0; j<m; j++)
{
  
   sum[i][j]= arr1[i][j]+arr2[i][j];

}

} //Sum//



for(i=0; i<n; i++)
{

	printf("\n");

for(j=0; j<m; j++)
{

    printf("%3d  ",sum[i][j]);
}

} //printing//


}





