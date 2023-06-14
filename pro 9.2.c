#include<stdio.h>
struct student
{
	int Roll_no;
	char name[100];
	int chem_mark;
	int maths_mark;
	int phy_mark;
	
}s[100];
main()
{
	int i,n;
	int sum=0;
	float p;
	
	printf("Enter student number:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter details of student%d:\n",i+1);
		
		printf("Roll_no=>");
		scanf("%d",&s[i].Roll_no);
		
		printf("Name=>");
		fflush(stdin);
		gets(s[i].name);
		
		printf("chem_mark=>");
		scanf("%d",&s[i].chem_mark);
		
		printf("maths_mark=>");
		scanf("%d",&s[i].maths_mark);
		
		printf("phy_mark=>");
		scanf("%d",&s[i].phy_mark);
		
		printf("\n\n-------------------------------\n\n");
	
	}
	
	for(i=0;i<n;i++)
	{	
	    sum+=s[i].chem_mark+s[i].maths_mark+s[i].phy_mark;
	    
	    p=(sum*100)/300;
	    
		printf("%s(%d)\nchemistry=>%d\nmathematics=>%d\nphysic=>s%d\nTotal=>%d\\300\npercent=>%f%%",s[i].name,s[i].Roll_no,s[i].chem_mark,s[i].maths_mark,s[i].phy_mark,sum,p);
		
		printf("\n\n-------------------------------\n\n");

	}

	
}
