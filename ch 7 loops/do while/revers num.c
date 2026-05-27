#include <stdio.h>

main()

{
	int rem,rev=0,a,n;
	printf("enter the number:-");
	scanf("%d",&a);
	while(a!=0)
	{
		rem=a%10;
		rev=rev*10+rem;
		a=a/10;
	}
	printf(" %d",rev);
}
