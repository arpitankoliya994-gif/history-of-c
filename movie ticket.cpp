 #include <stdio.h>

main()

{ 
  
  
  printf("\n\n----------------------------------------\n\n");
  printf("           Movie Ticket Booking                   ");
  printf("\n\n----------------------------------------\n\n");
  
  printf("press 1 for hollywood\n");
  
  printf("press 2 for bollywood\n");
  
  printf("press 3 for tollywood\n");
  
  printf("press 4 for gujarati\n");
  
  char choice;
  printf("enter your choice:-");
  scanf("%c",&choice);
  
  switch(choice)
  {
  	case '1':
  		printf("-----welcome to hollywood world-----\n\n");
  		
  		printf("press 1 for comedy\n\n");
  		
  		printf("press 2 horooooor\n\n");
  		
  		printf("press 3 romantic \n\n");
  		
  		printf("press 4 for action\n\n");
  		 
  		 char op;
  		 printf("enter your choice:- ");
  		 
  		 scanf(" %c",&op);
  		 
  		 switch(op)
  		  { 
  		  case '1':
  		  	printf("welcome to comedy movies world\n\n");
  		  	
  		  	printf("press a for game night 1\n");
  		  	
  		  	printf("press b for game night 2\n");
  		  	
  		  	printf("press c for game night 3\n");
  		  	 
  		  	 char og;
  		  	 printf("enter your choice:- ");
  		 scanf(" %c",&og);
  		  
  		  switch(og)
  		  {
			
  		   case '1':
  		   	 printf("game night 1 movie ticket is booked");
  		   	 break;
  		   	 
  		   case '2':
			 printf("game night 2 movie ticket is booked");
  		   	 break;
  		   	 
  		   case '3':	 
  		   	 printf("game night 3 movie ticket is booked");
  		   	 break;
  		   	 
  		   	 	default:
					printf("eroor");
						
  		   	 
  		   }
  		   break;
	}
			case '2': 
			
			printf("\n\n-----welcome to horoor movie world-----");
			printf("press a for lat night 1\n");
  		  	
  		  	printf("press b for the witch 2\n");
  		  	
  		  	printf("press c for evil dead rise 3\n");
  		  	 
  		  	 char ol; 
  		  	 	 printf("enter your choice:- ");
  		 scanf(" %c",&ol);
  		  
  		  switch(ol)
  		  {
  		  	case '1':
  		  		printf("your last night ticket is booked");
  		  		break;
  		  	
	     	case '2':
  		  		printf("your the witch ticket is booked");
  		  		break;
			case '3':
  		  		printf("your evil dead ticket is booked");
  		  		break;
					default:
					printf("eroor");
			break;			
			}
			case '3':
  		  	printf("welcome to romantic movies world\n\n");
  		  	
  		  	printf("press a for me before you 1\n");
  		  	
  		  	printf("press b for lost in forest 2\n");
  		  	
  		  	printf("press c for the notbook 3\n");
  		  	 
  		  	 char oi;
  		  	 printf("enter your choice:- ");
  		 scanf(" %c",&oi);
  		  
  		  switch(oi)
  		  {
			
  		   case '1':
  		   	 printf("me before you movie ticket is booked");
  		   	 break;
  		   	 
  		   case '2':
			 printf("lost in forest movie ticket is booked");
  		   	 break;
  		   	 
  		   case '3':	 
  		   	 printf("the notbook movie ticket is booked");
  		   	 break;
  		   	 
  		   }
    
}

  		  	 
				
  }
  

