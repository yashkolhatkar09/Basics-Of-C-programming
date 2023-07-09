#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()

{

 char str1[30];
 char str2[30];

 clrscr();

 printf("Enter the 1st string : ");
 scanf("%s",str1);

 printf("Enter the 2nd string : ");
 scanf("%s",str2);

 printf("The concanitated String is : %s",strcat(str1, str2));

 getch();

}