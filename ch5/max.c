#include<stdio.h>
 main()
 {
 	int a,b,c;
 	printf("enter the first num:-");
 	scanf("%d",&a);
 	printf("enter the second num:-");
 	scanf("%d",&b);
 	printf("enter the third num:-");
 	scanf("%d",&c);
 	 
 	 if(a>b)
 	 {
 	 	if(a>c)
 	 	{ 
 	 	printf("%d is max",a);
		  }
		  else
		  {
		  	printf("%d is max",c);
		  }
	}
		else
		   { 
		    if(b>c)
		    { 
		    printf("%d is max",b);
			}
			else 
			{
				printf("%d is max",c);
			}
		   }
	  
 }
