 #include <stdio.h>
 
 main()
  
  {
  	 printf("welcome to telecall service\n");
  	 printf("press 1 for english\n\n");
  	 printf("press 2 for hindi\n\n");
  	 printf("press 3 for gujrati\n\n");
  	  
  	  char choice;
  	  
  	  printf("enter your choice : -");
  	  scanf("%c",&choice);
  	   
  	   switch(choice)  
		 
  	   {
		 
  	   	case '1':
  	   		
  	   		printf("press a for internet recharge\n\n");
  	   		
  	   		printf("press b for top up recharge\n\n");
  	   		
  	   		printf("press c for special recharge\n\n");
  	   		
  	   		char select;
  	  
  	  printf("enter your choice : -");
  	  scanf(" %c",&select);
  	    
  	    switch(select)
  	    {
  	    	case 'a':
  	    		
  	    		printf("your internet recharge is done\n\n");
  	    		break;
  	    	
			 case 'b':
			 	
			 printf("your top up recharge is done\n\n");
			 break;
			 
			 case 'c':
			 	
			 printf("your special recharge is done\n\n");
			 
			 break; 	
			 default:
			 	
			 	
			 	 printf("enter properly\n\n");
		  }
  	  
  	   		break;
  	   		
  	   		case '2':
  	   			 printf("internet recharge ke liya a dabaye\n\n");
  	   			 
  	   			 printf("top up recharge ke liya b dabaye\n\n");
  	   			 
  	   			 printf("special recharge ke liya c dabaye\n\n"); 
  	   			 
  	   			 char op;
  	  
  	  printf("enter your choice : -");
  	  scanf(" %c",&op);
  	   			 
  	   			 switch(op)
  	   			 {
  	   			 	case 'a':
  	   			 	 
  	   			 	 printf("appka internet recharge ho gya he\n\n");
  	   			 	 break;
  	   			 	 
  	   			 	case 'b': 
  	   			 	 printf("appka top up recharge ho gya he\n\n");
  	   			 	 break;
  	   			 	 
  	   			 	case 'c':  
  	   			 	 printf("appka special recharge  ho gya he\n\n");
					  
  	   			 break;
  	   		}
  	   		
		 }
		 
  }
