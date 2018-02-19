#include<stdio.h>
#include<string.h>
int main()
{
char x[10],y[20];
int z;
printf("\n enter the string:");
scanf("%s",x);
strcpy(y,x);
strrev(y);
z=strcmp(x,y);
if(z==0)
{
printf("palindrome\n");
}
else
{
printf("not a palindrome\n");
}
return 0;
}
