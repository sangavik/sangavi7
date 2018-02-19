#include<stdio.h>
#include<conio.h>
void main()
{
int a,l;
char a[30]="12345";
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]%2!=0)
{
printf("%c",a[i]);
}
}
getch();
}
