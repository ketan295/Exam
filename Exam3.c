#include<stdio.h>

main()

{
	int a[3][3];
	int i,j,sum=0;
	
	printf("Enter elemnts in matrix :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		
	}
		for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(i==j)
			sum=sum+a[i][j];
		}
		
	}
	printf("Sum of diagonal element is : ",sum);
	
	
}
