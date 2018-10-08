#include<stdio.h>
void main()
{
	int i=1,a,c,s,t;
	char x[10];
	printf("enter the string value:\t");
	scanf("%s",x);
	while(x[i]!='\0')
	{
		i++;
	}
	printf("length of the string is:  %d\n",i);
	for(a=0;a<i;a++)
	{
	 	c=x[a];
		if(c>=65 && c<=90)
		{
			//printf("it is a upper case value\n");
			s=c+32;
			printf("%c",s);
		}
		else if(c>=97 && c<=122)
		{
			//printf("it is a lower case value\n");
			t=c-32;
			printf("%c",t);
		}
	}
}
