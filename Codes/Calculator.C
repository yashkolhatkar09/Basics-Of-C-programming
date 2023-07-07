#include<stdio.h>
#include<conio.h>

void main()
{
char operation;
int a,b;
float c;

printf("Enter an Operation of your choice +,-,/,*");

scanf("%c",operation);

printf ("Enter the First Number of Your Choice :\n");

scanf("%d",&a);

printf ("Enter the Second Number of Your Choice :\n");

scanf("%d",&b);


switch(operation)
	{
	case "+":(c=a+b);
	printf("%f= %d + %d", c,a,b);

	break;

	case "-":(c=a-b);
	printf("%f= %d - %d", c,a,b);

	break;

	case "*":(c=a*b);
	printf("%f= %d * %d", c,a,b);

	break;

	case "/":(c=a/b);
	printf("%f= %d / %d", c,a,b);

	break;

	default:
	printf("Error!Operation does not exist");

	}

  getch();

}




