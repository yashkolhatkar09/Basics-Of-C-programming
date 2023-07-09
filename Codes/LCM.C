

#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,sol,flag=1;
clrscr();
printf("Enter two numbers\n");
scanf("%d %d",&a,&b);
sol=(a>b)?a:b;
while(flag)
{
if(sol%a==0&&sol%b==0)
{
printf("LCM=%d",
sol);
break;
}
sol++;
}
getch();
}
