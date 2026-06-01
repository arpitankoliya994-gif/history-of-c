#include <stdio.h>
 
 main()
  {
  	 int a,b,c,d;
  	  
  	  printf("enter the maths marks : -");
  	  scanf("%d",&a);
  	    
  	  printf("enter the phy marks : -");
  	  scanf("%d",&b);
  	   
  	   printf("enter the chem marks : -");
  	 scanf("%d",&c);
  	  
  	  if(a<=100 && b<=100 && c<=100)
  	   {
  	   	 printf("your percentage is given below\n");
		 }
		else if(a>=100 && b>=100 && c>=100)
		{
			printf("please enter vailed marks");
			   } 	  
	else 
	{
		
	}
  	   d=(a+b+c)/3;
  	   printf("%d",d);
  	   
  }
