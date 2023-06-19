#include<stdio.h>
main()
{
	int n1,n2,n3;
	
	printf("enter the first number : ");
	scanf("%d",&n1);
	
	printf("enter the second number : ");
	scanf("%d",&n2);
	
	printf("enter the third number : ");
	scanf("%d",&n3);
	
	if(n1<n2)
	{
		printf("minimum number is n1");
	}
	else if(n2<n3)
	{
		printf("minimum number is n2");
	}
	else
	{
		printf("minimum number is n3");
	}
	
}
