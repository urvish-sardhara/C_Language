#include<stdio.h>

main()
{
	char x[1000],*p;
	int i,length=0;
	
	printf("enter any string : ");
	gets(x);
	
	p=x;
	
	for(i=0;*p!='\0';i++)
	{
		length++;
		p++;
	}
	
	printf("the length of the syring is : %d", length);
	
}

