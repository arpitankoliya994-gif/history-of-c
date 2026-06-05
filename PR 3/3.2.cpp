#include <stdio.h>

main()
{
	int i,b=0;
	printf("enter the number :-");
	
	scanf("%d",&i);
	
	do 
	{
		b++;
		i=i/10;
	}while(i!=0);
	
	printf("total digits is :-%d",b);
}
