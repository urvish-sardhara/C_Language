#include<stdio.h>
main()
{
	char str[50];
	int i,flag=0,length;
	
	printf("enter your name : ");
	scanf("%s",str);
	
	length=0;
	while(str[length]!='0')
	{
		length++;
	}
	
	for(i=0;i<length;i++)
	{
		if(str[i] != str[length-i-1])
		{
			flag=1;
			break;
		}
	}
	
	if(flag)
	{
		printf("\n%s is  palindorme",str);
	}
	else
	{
		printf("\n%s is not palindorme",str);	
	}	
}
