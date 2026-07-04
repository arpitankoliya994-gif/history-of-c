#include <stdio.h>

main()
{
	int a,b;
	printf("enter the number :-");
	scanf("%d",&a);
	
	if (a%3==0 && a%5==0)
	{
		printf("this number is divisible by 3 and 5 both");
		
	}
	else
	{
		printf("this number is not divisible by 3 and 5 both");
	}
}
