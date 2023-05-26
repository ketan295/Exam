#include<stdio.h>

main()
{
	int unit;
	float rs ,sur_charge,Total_rs;
	
	printf("Enter your unit :");
	scanf("%d",&unit);
	
	while(unit>=0)
	{
	
		if(unit<=50)
		{
			rs=rs*0.50;	
		}
		else if(unit<=150)
		{
			rs=rs*0.75;	
		}
		else if(unit<=250)
		{
			rs=rs*1.20;	
		}
	    else(unit>=250)
		{
			rs=rs*1.50;	
		}
	}
	sur_charge=rs*0.20;
	Total_rs=rs+sur_charge;
	
	printf("\nYour electricity bill is : %f",Total_rs);
	
}
