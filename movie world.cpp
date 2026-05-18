 #include <stdio.h>
 
 main()
 {
    	printf("====================================\n\n");
 	    printf("-------welcome to movie world-------\n\n");
 	    printf("====================================\n\n");
 	
 	int totalseats = 40;
 	
 	int bookedseats = 0;
 	
 	int ticket;
 	
 	char name;
 	 
 	 printf("enter your name :-\n");
 	 scanf("%c",&name);
 	 
 	 printf("avilable ticket:-%d\n",totalseats-bookedseats);
 	 
 	 printf("\nhow many ticket you want:-");
 	 scanf(" %c",&ticket);

 	
 	if(ticket<40)
 	{
 		printf("please enter vailid seats");
	 }
	else
	{
		printf("");
	 } 
	 
   printf("press 1 for hollywood\n");
  
  printf("press 2 for bollywood\n");
  
  printf("press 3 for tollywood\n");
  
  printf("press 4 for gujarati\n");
  
  char choice;
  printf("enter your choice:-");
  scanf(" %c",&choice);
  
  switch(choice)
  {
  	case '1':
  		printf("-----welcome to hollywood world-----\n\n");
  		
  		printf("press 1 for comedy\n\n");
  		
  		printf("press 2 horooooor\n\n");
  		
  		printf("press 3 romantic \n\n");
  		
  		printf("press 4 for action\n\n"); 
  		
  	char op;
	  printf("enter your choice:-");
	  scanf(" %c",&op);	
	  	  
	  switch(op)
	  {
	  	case '1':
	  		printf("welcome to comedy world\n\n");
	  		
	  		
	  		printf("press 1 for morning show\n ");
	  		printf("prees 2 for night show\n");
	  		printf("prees 3 for after noon show\n  ");
	  		
	  			char ol;
	  printf("enter your choice:-");
	  scanf(" %c",&ol);	
	  
	    switch(ol)
		{
			case '1':
				printf("show time is 9:45 am\n");
				printf("&&&&\n");
				printf("show time is 10:45 am\n");
				
				printf("press 1 for 9:45\n");
		    	printf("press 2 for 10:45\n");
				
				char rl;
				printf("enter your choice:-");
	  scanf(" %c",&rl);	
	  
		
					    	
		    	switch(rl)
		    	{
		    		case '1':
		    			printf("you enter in 9:45 arena\n\n");
		    			printf("movie list is given below\n\n");
		    			printf("press 1 for c1 \n");
	  		printf("prees 2 for c2\n");
	  		printf("prees 3 for c3\n");
		    			break;
		    			
		    			case '2':
		    				printf("you enter in 10:45 arena\n\n");
		    			printf("movie list is given below\n\n");
		    			printf("press 1 for c1 \n");
	  		printf("prees 2 for c2\n");
	  		printf("prees 3 for c3\n");
	  		break;
		    			
				}
				
				case '2':
				printf("show time is 9:45 pm\n");
				printf("&&&&\n");
				printf("show time is 10:45 pm\n");
				
				printf("press 1 for 9:45\n");
		    	printf("press 2 for 10:45\n");
				
				char ll;
				printf("enter your choice:-");
	  scanf(" %c",&ll);	
	  
	  
            break;		
					    	
		    	switch(ll)
		    	{
		    		case '1':
		    			printf("you enter in 9:45 arena\n\n");
		    			printf("movie list is given below\n\n");
		    			printf("press 1 for c1 \n");
	  		printf("prees 2 for c2\n");
	  		printf("prees 3 for c3\n");
		    			break;
		    			
		    			case '2':
		    				printf("you enter in 10:45 arena\n\n");
		    			printf("movie list is given below\n\n");
		    			printf("press 1 for c1 \n");
	  		printf("prees 2 for c2\n");
	  		printf("prees 3 for c3\n");
	  		break;
		    			
				}
				
				

				
				break;
				
			
				
					
		  }  
	  	break;
	  		
	  
	  	printf("your movies are given below\n\n");
	  		
	  		printf("1");
	  		printf("2");
	  		printf("3");
	  
	   
	  }
	  
    }
 	
 }
