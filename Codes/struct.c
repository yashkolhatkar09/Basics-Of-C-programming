
#include<stdio.h>
#include<conio.h>

 void main()



{

 int i,n;

 struct studentinformation
 {
 int roll;
 char name[30];
 char depart[30];
 char course[30];
 int year;
 } info[3];

clrscr();

printf("Enter the number of Students in Class : ");
scanf("%d",&n);

clrscr();


for (i=0;i<n;i++)
	{
	printf("Enter the Information of Student #%d",i+1);

	 printf("\nName : ");
	 scanf("%s", info[i].name);

	 printf("Roll Number : ");
	 scanf("%d",info[i].roll);

	 printf("Department : ");
	 scanf("%s",info[i].depart);

	 printf("Course : ");
	 scanf("%s",info[i].course);

	 printf("Year : ");
	 scanf("%d",&info[i].year);

	 printf("\n\n");

	 }

clrscr();

for (i=0;i<n;i++)
	{

	   printf("The Information about Student #%d is : ",i+1);

	   printf("\nName : %s",info[i].name);
	   printf("\nRoll Number : %d",info[i].roll);
	   printf("\nDepartment : %s",info[i].depart);
	   printf("\nCourse : %s",info[i].course);
	   printf("\nYear : %d", info[i].year);

	   printf("\n\n");


	 }


 getch();

}







