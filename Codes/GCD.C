#include<conio.h>
#include<stdio.h>
int main()
{
int a,b,i,GCD;
clrscr();

printf("Enter Your Number Here \n");
scanf("%d%d",&a, &b);


for(i=1;i<=a && i<=b;i++)
{

if(a%i==0 && b%i==0)
GCD=i;
}

printf("The GCD is %d",GCD);
getch();
return 0;

}