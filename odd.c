#include<stdio.h>
void main()
{
int i,a,b;
printf("enter the starting and end value:\n");
scanf("%d%d",&a,&b);
printf("the odd numbers are:\n");
for(i=a;i<=b;i++)
{
if(i%2==1)
{
printf("%d\n",i);
}
}
}
