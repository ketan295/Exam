#include<stdio.h>

main()

{
	int n , Fd ,Ld,sum;
	
	printf("Enter any value :");
	scanf("%d",&n);
	
	Ld=n%10;
	
	while(n>=10)
	{
		n=n/10;
	}
	Fd=n;
	sum=Fd+Ld;
	
	printf("Sum of first digit and last digit is :%d",sum);
}
