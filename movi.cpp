#include <stdio.h>
 
 main()
 {
    	printf("====================================\n\n");
 	    printf("-------welcome to movie world-------\n\n");
 	    printf("====================================\n\n");
 	
 	int totalseats = 40;
 	
 	int bookedseats = 0;
 	
 	char ticket;
 	
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
  		
  	char choice1;
	  printf("enter your choice:-");
	  scanf(" %c",&choice1);	
	  	  
	  switch(choice1)
	  {
	  	case '1':
	  		printf("welcome to comedy world\n\n");
	  		
	  		
	  		printf("press 1 for morning show\n ");
	  		
	  		printf("prees 2 for night show\n");
	  		
	  		printf("prees 3 for after noon show\n  ");
	  		
	  			char choice2;
	  printf("enter your choice:-");
	  scanf(" %c",&choice2);	
	  
	    switch(choice2)
		{
			case '1':
				printf("show time is 9:45 am\n");
				
				printf("&&&&\n");
				
				printf("show time is 10:45 am\n");
				
				
				printf("press 1 for 9:45\n");
				
		    	printf("press 2 for 10:45\n");
				
				char choice3;
				printf("enter your choice:-");
	  scanf(" %c",&choice3);	
	  
		
					    	
		    	switch(choice3)
		    	{
		    		case '1':
		    			printf("you enter in 9:45 arena\n\n");
		    			
		    			printf("movie list is given below\n\n");
		    			
		    			printf("press 1 for c1 \n");
		    			
	  		printf("prees 2 for c2\n");
	  		
	  		printf("prees 3 for c3\n"); 
			  
			   
	  		
	  			char choice6;
				printf("enter your choice:-");
	  scanf(" %c",&choice6);	
	    
	    switch(choice6)
	    {
	    	case '1':
	    		printf("300 for normal sofa(press 1)\n\n");
	    		printf("350 for normal+ sofa(press 2)\n\n");
	    		printf("450 for luxurios sofa(press 3)\n\n");
	    		
	    		char choice7;
				printf("enter your choice:-");
	  scanf(" %c",&choice7);	
	  
	    switch(choice7)
	    
	     case '1':
	     	printf("your normal sofa for c1 is booked");
	     	break;
	     	   case '2':
	     	printf("your normal+ sofa for c2 is booked");
	     	break;
	     	   case '3':
	     	printf("your luxiory for c3 is booked");
	     	break;
	    		
	    		
		}
	  		
	  		
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
				
				case '2':
				printf("show time is 9:45 pm\n");
				
				printf("&&&&\n");
				
				printf("show time is 10:45 pm\n");
				
				printf("press 1 for 9:45\n");
				
		    	printf("press 2 for 10:45\n");
		    	
				
				char choice4;
				printf("enter your choice:-");
	  scanf(" %c",&choice4);	
	  
	  
            break;		
					    	
		    	switch(choice4)
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
				case '3':
				printf("show time is 5:00 pm\n");
				
				printf("&&&&\n");
				
				printf("show time is 4:30 pm\n");
				
				printf("press 1 for 5:00\n");
		    	printf("press 2 for 4:30\n");
				
				char choice5;
				printf("enter your choice:-");
	  scanf(" %c",&choice5);	
	  
	  
            break;		
					    	
		    	switch(choice5)
		    	{
		    		case '1':
		    			printf("you enter in 5:00 arena\n\n");
		    			
		    			printf("movie list is given below\n\n");
		    			
		    			printf("press 1 for c1 \n");
		    			
	  		printf("prees 2 for c2\n");
	  		
	  		printf("prees 3 for c3\n");
		    			break;
		    			
		    			case '2':
		    				printf("you enter in 4:305 arena\n\n");
		    				
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
