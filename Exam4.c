#include<stdio.h>

main()

{
	int a,b,c,d;
	
	printf("Enter four values :");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	if(a>b&&a>c&&a>d)
	{
	
	printf("%d is maximum",a);
	}
	else if(b>c&&b>d)
	{
		printf("%d is maximum",b);
	}

	else if(c>d)
	{
		printf("%d is maximum",c);
	}
	else
	{
		printf("%d is maximum",d);
	}
}
