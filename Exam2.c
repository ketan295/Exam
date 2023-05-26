#include<stdio.h>

struct students(s[])
{
	int roll_no;
	char name[100],adress[100];
}students s[100];

main()
{
	int i;
	
	for(i=1;i<=5;i++)
	{
		printf("Enter your roll no .:");
		scanf("%d",s[i].roll_no);
		
		printf("Enter your name :");
		scanf("%d",s[i].name);
		
		printf("Enter your adress .:");
		scanf("%d",s[i].adress);
	}
	for(i=1;i<=5;i++)
	{
		printf(" your roll no. is:",s[i].roll_no);
		printf(" your roll name is:",s[i].name);
		printf(" your roll no. is:",s[i].adress);
	}
	
}

