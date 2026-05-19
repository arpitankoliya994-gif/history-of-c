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
 	 
 	 printf("enter your name :-");
 	 scanf(" %c",&name);
 	 
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
			  
			
	  			char choice4;
	  			
				printf("enter your choice:-");
				
	  scanf(" %c",&choice4);	
	    
	    switch(choice4)
	    {
	    	case '1':
	    		printf(" 300 $  normal sofa(press 1)\n\n");
	    		
printf(" press 2 for 400 $  normal+ sofa\n\n");


printf(" press 3 for 450 $  normal sofa\n\n");	    	
	
	    		char choice5;
	    		
				printf("enter your choice:-");
	  scanf(" %c",&choice5);	
	  
	    switch(choice5)
	    
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
	  		
		    			
				}
				break;
				
				case '2':
				printf("show time is 9:45 pm\n");
				
				printf("&&&&\n");
				
				printf("show time is 10:45 pm\n");
				
				printf("press 1 for 9:45\n");
				
		    	printf("press 2 for 10:45\n");
		    	
				
				char choice8;
				
				printf("enter your choice:-");
				
	  scanf(" %c",&choice8);	
	  
	  
            break;		
					    	
		    	switch(choice8)
		    	{
		    		case '1':
		    			printf("you enter in 9:45 arena\n\n");
		    			
		    			printf("movie list is given below\n\n");
		    			
		    			printf("press 1 for c1 \n");
		    			
	  		printf("prees 2 for c2\n");
	  		
	  		
	  		printf("prees 3 for c3\n");
	  			char choice9;
	  			
				printf("enter your choice:-");
	  scanf(" %c",&choice9);	
	  
	    
	    switch(choice9)
	    {
	    	case '1':
	    		printf(" press 1 for 300 $  normal sofa\n\n");
	    		
printf(" press 2 for 400 $  normal+ sofa\n\n");

printf(" press 3 for 450 $  normal sofa\n\n");	    		
	    	
				char choice10;
				printf("enter your choice:-");
				
	  scanf(" %c",&choice10);	
	  
	  
	    switch(choice10)
	    
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
				case '3':
				printf("show time is 5:00 pm\n");
				
				printf("&&&&\n");
				
				
				printf("show time is 4:30 pm\n");
				
				printf("press 1 for 5:00\n");
				
		    	printf("press 2 for 4:30\n");
				
				char choice11;
				printf("enter your choice:-");
	  scanf(" %c",&choice11);	
	  
	  
            break;		
					    	
		    	switch(choice11)
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
	  	
	  	case '2':
	  		
	  		printf("welcome to horrorrrrrrr world\n\n");
	  		
	  		
	  		printf("press 1 for morning show\n ");
	  		
	  		printf("prees 2 for night show\n");
	  		
	  		printf("prees 3 for after noon show\n  ");
	  		
	  			char choice12;
	  printf("enter your choice:-");
	  
	  
	  scanf(" %c",&choice12);	
	  
	    switch(choice12)
		{
			case '1':
				printf("show time is 9:45 am\n");
				
				printf("&&&&\n");
				
				printf("show time is 10:45 am\n");
				
				
				printf("press 1 for 9:45\n");
				
		    	printf("press 2 for 10:45\n");
				
				
				
				char choice13;
				printf("enter your choice:-");
				
				
	  scanf(" %c",&choice13);	
	  
		
					    	
		    	switch(choice13)
		    	{
		    		case '1':
		    			printf("you enter in 9:45 arena\n\n");
		    			
		    			printf("movie list is given below\n\n");
		    			
		    			printf("press 1 for c1 \n");
		    			
	  		printf("prees 2 for c2\n");
	  		
	  		printf("prees 3 for c3\n"); 
			  
			   
	  		
	  			char choice14;
				printf("enter your choice:-");
	  scanf(" %c",&choice14);	
	    
	    switch(choice14)
	    {
	    	case '1':
	    		printf(" 300 $  normal sofa(press 1)\n\n");
	    		
printf(" press 2 for 400 $  normal+ sofa\n\n");

printf(" press 3 for 450 $  normal sofa\n\n");	    		

	    		char choice15;
	    		
				printf("enter your choice:-");
				
	  scanf(" %c",&choice15);	
	  
	    switch(choice15)
	    
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
	  		
	  			char choice16;
				printf("enter your choice:-");
	  scanf(" %c",&choice16);	
	  
	    
	    
	    switch(choice16)
	    {
	    	case '1':
	    		printf("300 for normal sofa(press 1)\n\n");
	    		
	    		printf("350 for normal+ sofa(press 2)\n\n");
	    		
	    		printf("450 for luxurios sofa(press 3)\n\n");
	    		
	    		
	    		char choice17;
				printf("enter your choice:-");
				
	  scanf(" %c",&choice17);	
	  
	    switch(choice17)
	    
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
		    			
				}
				break;
				
				case '2':
				printf("show time is 9:45 pm\n");
				
				printf("&&&&\n");
				
				printf("show time is 10:45 pm\n");
				
				printf("press 1 for 9:45\n");
				
		    	printf("press 2 for 10:45\n");
		    	
				
				char choice18;
				printf("enter your choice:-");
	  scanf(" %c",&choice18);	
	  
	  
            break;		
					    	
		    	switch(choice18)
		    	{
		    		case '1':
		    			printf("you enter in 9:45 arena\n\n");
		    			
		    			printf("movie list is given below\n\n");
		    			
		    			printf("press 1 for c1 \n");
		    			
	  		printf("prees 2 for c2\n");
	  		
	  		
	  		printf("prees 3 for c3\n");
	  			char choice19;
				printf("enter your choice:-");
	  scanf(" %c",&choice19);	
	    
	    switch(choice19)
	    {
	    	case '1':
	    		printf(" press 1 for 300 $  normal sofa\n\n");
	    		
printf(" press 2 for 400 $  normal+ sofa\n\n");

printf(" press 3 for 450 $  normal sofa\n\n");	    		

	    	
				char choice20;
				printf("enter your choice:-");
	  scanf(" %c",&choice20);	
	  
	  
	    switch(choice20)
	    
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
				case '3':
				printf("show time is 5:00 pm\n");
				
				printf("&&&&\n");
				
				printf("show time is 4:30 pm\n");
				
				printf("press 1 for 5:00\n");
				
				
		    	printf("press 2 for 4:30\n");
				
				char choice21;
				printf("enter your choice:-");
	  scanf(" %c",&choice21);	
	  
	  
            break;		
					    	
		    	switch(choice21)
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
	  	
	  	case '3':
	  	
	  	
	  		printf("welcome to romantic movie world\n\n");
	  		
	  		
	  		printf("press 1 for morning show\n ");
	  		
	  		printf("prees 2 for night show\n");
	  		
	  		printf("prees 3 for after noon show\n  ");
	  		
	  			char choice22;
	  			
	  printf("enter your choice:-");
	  scanf(" %c",&choice22);	
	  
	    switch(choice22)
		{
			case '1':
				printf("show time is 9:45 am\n");
				
				printf("&&&&\n");
				
				printf("show time is 10:45 am\n");
				
				
				printf("press 1 for 9:45\n");
				
		    	printf("press 2 for 10:45\n");
				
				char choice23;
				printf("enter your choice:-");
	  scanf(" %c",&choice23);	
	  
		
					    	
		    	switch(choice23)
		    	{
		    		case '1':
		    			printf("you enter in 9:45 arena\n\n");
		    			
		    			printf("movie list is given below\n\n");
		    			
		    			printf("press 1 for c1 \n");
		    			
	  		printf("prees 2 for c2\n");
	  		
	  		printf("prees 3 for c3\n"); 
			  
			   
	  		
	  			char choice24;
				printf("enter your choice:-");
	  scanf(" %c",&choice24);	
	    
	    switch(choice24)
	    {
	    	case '1':
	    		printf(" 300 $  normal sofa(press 1)\n\n");
	    		
printf(" press 2 for 400 $  normal+ sofa\n\n");

printf(" press 3 for 450 $  normal sofa\n\n");	    		
	    		char choice25;
	    		
				printf("enter your choice:-");
	  scanf(" %c",&choice25);	
	  
	    switch(choice25)
	    
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
	  		
	  			char choice26;
				printf("enter your choice:-");
	  scanf(" %c",&choice26);	
	    
	    switch(choice26)
	    {
	    	case '1':
	    		printf("300 for normal sofa(press 1)\n\n");
	    		
	    		printf("350 for normal+ sofa(press 2)\n\n");
	    		
	    		printf("450 for luxurios sofa(press 3)\n\n");
	    		
	    		
	    		
	    		char choice27;
				printf("enter your choice:-");
	  scanf(" %c",&choice27);	
	  
	  
	    switch(choice27)
	    
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
		    			
				}
				break;
				
				case '2':
				printf("show time is 9:45 pm\n");
				
				printf("&&&&\n");
				
				printf("show time is 10:45 pm\n");
				
				printf("press 1 for 9:45\n");
				
		    	printf("press 2 for 10:45\n");
		    	
				
				char choice28;
				printf("enter your choice:-");
	  scanf(" %c",&choice28);	
	  
	  
            break;		
					    	
		    	switch(choice28)
		    	{
		    		case '1':
		    			printf("you enter in 9:45 arena\n\n");
		    			
		    			printf("movie list is given below\n\n");
		    			
		    			printf("press 1 for c1 \n");
		    			
	  		printf("prees 2 for c2\n");
	  		
	  		
	  		printf("prees 3 for c3\n");
	  			char choice29;
				printf("enter your choice:-");
	  scanf(" %c",&choice29);	
	    
	    switch(choice29)
	    {
	    	case '1':
	    		printf(" press 1 for 300 $  normal sofa\n\n");
	    		
printf(" press 2 for 400 $  normal+ sofa\n\n");

printf(" press 3 for 450 $  normal sofa\n\n");	    		

	    	
				char choice30;
				printf("enter your choice:-");
				
				
	  scanf(" %c",&choice30);	
	  
	  
	    switch(choice30)
	    
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
				case '3':
				printf("show time is 5:00 pm\n");
				
				printf("&&&&\n");
				
				printf("show time is 4:30 pm\n");
				
				printf("press 1 for 5:00\n");
				
		    	printf("press 2 for 4:30\n");
				
				char choice31;
				printf("enter your choice:-");
	  scanf(" %c",&choice31);	
	  
	  
            break;		
					    	
		    	switch(choice31)
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
	  	
	  	case '4':
	  		
	  		printf("welcome to action world\n\n");
	  		
	  		
	  		printf("press 1 for morning show\n ");
	  		
	  		printf("prees 2 for night show\n");
	  		
	  		printf("prees 3 for after noon show\n  ");
	  		
	  			char choice32;
	  printf("enter your choice:-");
	  scanf(" %c",&choice32);	
	  
	    switch(choice32)
		{
			case '1':
				printf("show time is 9:45 am\n");
				
				printf("&&&&\n");
				
				printf("show time is 10:45 am\n");
				
				
				printf("press 1 for 9:45\n");
				
		    	printf("press 2 for 10:45\n");
				
				char choice33;
				printf("enter your choice:-");
	  scanf(" %c",&choice33);	
	  
		
					    	
		    	switch(choice33)
		    	{
		    		case '1':
		    			printf("you enter in 9:45 arena\n\n");
		    			
		    			printf("movie list is given below\n\n");
		    			
		    			printf("press 1 for c1 \n");
		    			
	  		printf("prees 2 for c2\n");
	  		
	  		printf("prees 3 for c3\n"); 
			  
			   
	  		
	  			char choice34;
				printf("enter your choice:-");
	  scanf(" %c",&choice34);	
	    
	    switch(choice34)
	    {
	    	case '1':
	    		printf(" 300 $  normal sofa(press 1)\n\n");
	    		
printf(" press 2 for 400 $  normal+ sofa\n\n");

printf(" press 3 for 450 $  normal sofa\n\n");	    		

	    		char choice35;
				printf("enter your choice:-");
	  scanf(" %c",&choice35);	
	  
	    switch(choice35)
	    
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
	  		
	  			char choice36;
				printf("enter your choice:-");
	  scanf(" %c",&choice36);	
	    
	    switch(choice36)
	    {
	    	case '1':
	    		printf("300 for normal sofa(press 1)\n\n");
	    		printf("350 for normal+ sofa(press 2)\n\n");
	    		printf("450 for luxurios sofa(press 3)\n\n");
	    		
	    		char choice37;
				printf("enter your choice:-");
	  scanf(" %c",&choice37);	
	  
	    switch(choice37)
	    
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
		    			
				}
				break;
				
				case '2':
				printf("show time is 9:45 pm\n");
				
				printf("&&&&\n");
				
				printf("show time is 10:45 pm\n");
				
				printf("press 1 for 9:45\n");
				
		    	printf("press 2 for 10:45\n");
		    	
				
				char choice38;
				printf("enter your choice:-");
	  scanf(" %c",&choice38);	
	  
	  
            break;		
					    	
		    	switch(choice38)
		    	{
		    		case '1':
		    			printf("you enter in 9:45 arena\n\n");
		    			
		    			printf("movie list is given below\n\n");
		    			
		    			printf("press 1 for c1 \n");
		    			
	  		printf("prees 2 for c2\n");
	  		
	  		
	  		printf("prees 3 for c3\n");
	  			char choice39;
				printf("enter your choice:-");
	  scanf(" %c",&choice39);	
	    
	    switch(choice39)
	    {
	    	case '1':
	    		printf(" press 1 for 300 $  normal sofa\n\n");
printf(" press 2 for 400 $  normal+ sofa\n\n");
printf(" press 3 for 450 $  normal sofa\n\n");	    		
	    	
				char choice40;
				printf("enter your choice:-");
	  scanf(" %c",&choice40);	
	  
	    switch(choice40)
	    
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
				case '3':
				printf("show time is 5:00 pm\n");
				
				printf("&&&&\n");
				
				printf("show time is 4:30 pm\n");
				
				printf("press 1 for 5:00\n");
		    	printf("press 2 for 4:30\n");
				
				char choice41;
				printf("enter your choice:-");
	  scanf(" %c",&choice41);	
	  
	  
            break;		
					    	
		    	switch(choice41)
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
	  
	  
	  }
	  break;
	  
	  
  	case '2':
  		printf("-----welcome to bollywood world-----\n\n");
  		
  		 printf("press 1 for comedy\n\n");
  		
  		printf("press 2 horooooor\n\n");
  		
  		printf("press 3 romantic \n\n");
  		
  		printf("press 4 for action\n\n"); 
  		
  	char choice42;
	  printf("enter your choice:-");
	  
	  scanf(" %c",&choice42);	
	  	  
	  switch(choice42)
	  {
	  	case '1':
	  		printf("welcome to comedy world\n\n");
	  		
	  		
	  		printf("press 1 for morning show\n ");
	  		
	  		printf("prees 2 for night show\n");
	  		
	  		printf("prees 3 for after noon show\n  ");
	  		
	  			char choice43;
	  			
	  printf("enter your choice:-");
	  
	  scanf(" %c",&choice43);	
	  
	    switch(choice43)
		{
			case '1':
				printf("show time is 9:45 am\n");
				
				printf("&&&&\n");
				
				printf("show time is 10:45 am\n");
				
				
				printf("press 1 for 9:45\n");
				
		    	printf("press 2 for 10:45\n");
				
				char choice44;
				printf("enter your choice:-");
	  scanf(" %c",&choice44);	
	  
		
					    	
		    	switch(choice44)
		    	{
		    		case '1':
		    			printf("you enter in 9:45 arena\n\n");
		    			
		    			printf("movie list is given below\n\n");
		    			
		    			printf("press 1 for c1 \n");
		    			
	  		printf("prees 2 for c2\n");
	  		
	  		printf("prees 3 for c3\n"); 
			  
			
	  			char choice45;
	  			
				printf("enter your choice:-");
				
	  scanf(" %c",&choice45);	
	    
	    switch(choice45)
	    {
	    	case '1':
	    		printf(" 300 $  normal sofa(press 1)\n\n");
	    		
printf(" press 2 for 400 $  normal+ sofa\n\n");


printf(" press 3 for 450 $  normal sofa\n\n");	    	
	
	    		char choice46;
	    		
				printf("enter your choice:-");
	  scanf(" %c",&choice46);	
	  
	    switch(choice46)
	    
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
	  		
	  			char choice47;
				printf("enter your choice:-");
	  scanf(" %c",&choice47);	
	    
	    switch(choice47)
	    {
	    	case '1':
	    		printf("300 for normal sofa(press 1)\n\n");
	    		
	    		printf("350 for normal+ sofa(press 2)\n\n");
	    		
	    		printf("450 for luxurios sofa(press 3)\n\n");
	    		
	    		char choice48;
	    		
				printf("enter your choice:-");
				
	  scanf(" %c",&choice48);	
	  
	    switch(choice48)
	    
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
	  		
		    			
				}
				break;
				
				case '2':
				printf("show time is 9:45 pm\n");
				
				printf("&&&&\n");
				
				printf("show time is 10:45 pm\n");
				
				printf("press 1 for 9:45\n");
				
		    	printf("press 2 for 10:45\n");
		    	
				
				char choice49;
				
				printf("enter your choice:-");
				
	  scanf(" %c",&choice49);	
	  
	  
            break;		
					    	
		    	switch(choice49)
		    	{
		    		case '1':
		    			printf("you enter in 9:45 arena\n\n");
		    			
		    			printf("movie list is given below\n\n");
		    			
		    			printf("press 1 for c1 \n");
		    			
	  		printf("prees 2 for c2\n");
	  		
	  		
	  		printf("prees 3 for c3\n");
	  			char choice50;
	  			
				printf("enter your choice:-");
	  scanf(" %c",&choice50);	
	  
	    
	    switch(choice50)
	    {
	    	case '1':
	    		printf(" press 1 for 300 $  normal sofa\n\n");
	    		
printf(" press 2 for 400 $  normal+ sofa\n\n");

printf(" press 3 for 450 $  normal sofa\n\n");	    		
	    	
				char choice51;
				printf("enter your choice:-");
				
	  scanf(" %c",&choice51);	
	  
	  
	    switch(choice51)
	    
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
				case '3':
				printf("show time is 5:00 pm\n");
				
				printf("&&&&\n");
				
				
				printf("show time is 4:30 pm\n");
				
				printf("press 1 for 5:00\n");
				
		    	printf("press 2 for 4:30\n");
				
				char choice52;
				printf("enter your choice:-");
	  scanf(" %c",&choice52);	
	  
	  
            break;		
					    	
		    	switch(choice52)
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
	  	
	  	case '2':
	  		
	  		printf("welcome to horrorrrrrrr world\n\n");
	  		
	  		
	  		printf("press 1 for morning show\n ");
	  		
	  		printf("prees 2 for night show\n");
	  		
	  		printf("prees 3 for after noon show\n  ");
	  		
	  			char choice53;
	  printf("enter your choice:-");
	  
	  
	  scanf(" %c",&choice53);	
	  
	    switch(choice53)
		{
			case '1':
				printf("show time is 9:45 am\n");
				
				printf("&&&&\n");
				
				printf("show time is 10:45 am\n");
				
				
				printf("press 1 for 9:45\n");
				
		    	printf("press 2 for 10:45\n");
				
				
				
				char choice54;
				printf("enter your choice:-");
				
				
	  scanf(" %c",&choice54);	
	  
		
					    	
		    	switch(choice54)
		    	{
		    		case '1':
		    			printf("you enter in 9:45 arena\n\n");
		    			
		    			printf("movie list is given below\n\n");
		    			
		    			printf("press 1 for c1 \n");
		    			
	  		printf("prees 2 for c2\n");
	  		
	  		printf("prees 3 for c3\n"); 
			  
			   
	  		
	  			char choice55;
				printf("enter your choice:-");
	  scanf(" %c",&choice55);	
	    
	    switch(choice55)
	    {
	    	case '1':
	    		printf(" 300 $  normal sofa(press 1)\n\n");
	    		
printf(" press 2 for 400 $  normal+ sofa\n\n");

printf(" press 3 for 450 $  normal sofa\n\n");	    		

	    		char choice56;
	    		
				printf("enter your choice:-");
				
	  scanf(" %c",&choice56);	
	  
	    switch(choice56)
	    
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
	  		
	  			char choice57;
				printf("enter your choice:-");
	  scanf(" %c",&choice57);	
	  
	    
	    
	    switch(choice57)
	    {
	    	case '1':
	    		printf("300 for normal sofa(press 1)\n\n");
	    		
	    		printf("350 for normal+ sofa(press 2)\n\n");
	    		
	    		printf("450 for luxurios sofa(press 3)\n\n");
	    		
	    		
	    		char choice58;
				printf("enter your choice:-");
				
	  scanf(" %c",&choice58);	
	  
	    switch(choice58)
	    
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
		    			
				}
				break;
				
				case '2':
				printf("show time is 9:45 pm\n");
				
				printf("&&&&\n");
				
				printf("show time is 10:45 pm\n");
				
				printf("press 1 for 9:45\n");
				
		    	printf("press 2 for 10:45\n");
		    	
				
				char choice59;
				printf("enter your choice:-");
	  scanf(" %c",&choice59);	
	  
	  
            break;		
					    	
		    	switch(choice59)
		    	{
		    		case '1':
		    			printf("you enter in 9:45 arena\n\n");
		    			
		    			printf("movie list is given below\n\n");
		    			
		    			printf("press 1 for c1 \n");
		    			
	  		printf("prees 2 for c2\n");
	  		
	  		
	  		printf("prees 3 for c3\n");
	  			char choice69;
				printf("enter your choice:-");
	  scanf(" %c",&choice69);	
	    
	    switch(choice69)
	    {
	    	case '1':
	    		printf(" press 1 for 300 $  normal sofa\n\n");
	    		
printf(" press 2 for 400 $  normal+ sofa\n\n");

printf(" press 3 for 450 $  normal sofa\n\n");	    		

	    	
				char choice70;
				printf("enter your choice:-");
	  scanf(" %c",&choice70);	
	  
	  
	    switch(choice70)
	    
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
				case '3':
				printf("show time is 5:00 pm\n");
				
				printf("&&&&\n");
				
				printf("show time is 4:30 pm\n");
				
				printf("press 1 for 5:00\n");
				
				
		    	printf("press 2 for 4:30\n");
				
				char choice71;
				printf("enter your choice:-");
	  scanf(" %c",&choice71);	
	  
	  
            break;		
					    	
		    	switch(choice71)
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
	  	
	  	case '3':
	  	
	  	
	  		printf("welcome to romantic movie world\n\n");
	  		
	  		
	  		printf("press 1 for morning show\n ");
	  		
	  		printf("prees 2 for night show\n");
	  		
	  		printf("prees 3 for after noon show\n  ");
	  		
	  			char choice72;
	  			
	  printf("enter your choice:-");
	  scanf(" %c",&choice72);	
	  
	    switch(choice72)
		{
			case '1':
				printf("show time is 9:45 am\n");
				
				printf("&&&&\n");
				
				printf("show time is 10:45 am\n");
				
				
				printf("press 1 for 9:45\n");
				
		    	printf("press 2 for 10:45\n");
				
				char choice73;
				printf("enter your choice:-");
	  scanf(" %c",&choice73);	
	  
		
					    	
		    	switch(choice73)
		    	{
		    		case '1':
		    			printf("you enter in 9:45 arena\n\n");
		    			
		    			printf("movie list is given below\n\n");
		    			
		    			printf("press 1 for c1 \n");
		    			
	  		printf("prees 2 for c2\n");
	  		
	  		printf("prees 3 for c3\n"); 
			  
			   
	  		
	  			char choice74;
				printf("enter your choice:-");
	  scanf(" %c",&choice74);	
	    
	    switch(choice74)
	    {
	    	case '1':
	    		printf(" 300 $  normal sofa(press 1)\n\n");
	    		
printf(" press 2 for 400 $  normal+ sofa\n\n");

printf(" press 3 for 450 $  normal sofa\n\n");	    		
	    		char choice75;
	    		
				printf("enter your choice:-");
	  scanf(" %c",&choice75);	
	  
	    switch(choice75)
	    
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
	  		
	  			char choice76;
				printf("enter your choice:-");
	  scanf(" %c",&choice76);	
	    
	    switch(choice76)
	    {
	    	case '1':
	    		printf("300 for normal sofa(press 1)\n\n");
	    		
	    		printf("350 for normal+ sofa(press 2)\n\n");
	    		
	    		printf("450 for luxurios sofa(press 3)\n\n");
	    		
	    		
	    		
	    		char choice77;
				printf("enter your choice:-");
	  scanf(" %c",&choice77);	
	  
	  
	    switch(choice77)
	    
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
		    			
				}
				break;
				
				case '2':
				printf("show time is 9:45 pm\n");
				
				printf("&&&&\n");
				
				printf("show time is 10:45 pm\n");
				
				printf("press 1 for 9:45\n");
				
		    	printf("press 2 for 10:45\n");
		    	
				
				char choice78;
				printf("enter your choice:-");
	  scanf(" %c",&choice78);	
	  
	  
            break;		
					    	
		    	switch(choice78)
		    	{
		    		case '1':
		    			printf("you enter in 9:45 arena\n\n");
		    			
		    			printf("movie list is given below\n\n");
		    			
		    			printf("press 1 for c1 \n");
		    			
	  		printf("prees 2 for c2\n");
	  		
	  		
	  		printf("prees 3 for c3\n");
	  			char choice79;
				printf("enter your choice:-");
	  scanf(" %c",&choice79);	
	    
	    switch(choice79)
	    {
	    	case '1':
	    		printf(" press 1 for 300 $  normal sofa\n\n");
	    		
printf(" press 2 for 400 $  normal+ sofa\n\n");

printf(" press 3 for 450 $  normal sofa\n\n");	    		

	    	
				char choice80;
				printf("enter your choice:-");
				
				
	  scanf(" %c",&choice80);	
	  
	  
	    switch(choice80)
	    
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
				case '3':
				printf("show time is 5:00 pm\n");
				
				printf("&&&&\n");
				
				printf("show time is 4:30 pm\n");
				
				printf("press 1 for 5:00\n");
				
		    	printf("press 2 for 4:30\n");
				
				char choice81;
				printf("enter your choice:-");
	  scanf(" %c",&choice81);	
	  
	  
            break;		
					    	
		    	switch(choice81)
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
	  	
	  	case '4':
	  		
	  		printf("welcome to action world\n\n");
	  		
	  		
	  		printf("press 1 for morning show\n ");
	  		
	  		printf("prees 2 for night show\n");
	  		
	  		printf("prees 3 for after noon show\n  ");
	  		
	  			char choice82;
	  printf("enter your choice:-");
	  scanf(" %c",&choice82);	
	  
	    switch(choice82)
		{
			case '1':
				printf("show time is 9:45 am\n");
				
				printf("&&&&\n");
				
				printf("show time is 10:45 am\n");
				
				
				printf("press 1 for 9:45\n");
				
		    	printf("press 2 for 10:45\n");
				
				char choice83;
				printf("enter your choice:-");
	  scanf(" %c",&choice83);	
	  
		
					    	
		    	switch(choice83)
		    	{
		    		case '1':
		    			printf("you enter in 9:45 arena\n\n");
		    			
		    			printf("movie list is given below\n\n");
		    			
		    			printf("press 1 for c1 \n");
		    			
	  		printf("prees 2 for c2\n");
	  		
	  		printf("prees 3 for c3\n"); 
			  
			   
	  		
	  			char choice84;
				printf("enter your choice:-");
	  scanf(" %c",&choice84);	
	    
	    switch(choice84)
	    {
	    	case '1':
	    		printf(" 300 $  normal sofa(press 1)\n\n");
	    		
printf(" press 2 for 400 $  normal+ sofa\n\n");

printf(" press 3 for 450 $  normal sofa\n\n");	    		

	    		char choice85;
				printf("enter your choice:-");
	  scanf(" %c",&choice85);	
	  
	    switch(choice85)
	    
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
	  		
	  			char choice86;
				printf("enter your choice:-");
	  scanf(" %c",&choice86);	
	    
	    switch(choice86)
	    {
	    	case '1':
	    		printf("300 for normal sofa(press 1)\n\n");
	    		printf("350 for normal+ sofa(press 2)\n\n");
	    		printf("450 for luxurios sofa(press 3)\n\n");
	    		
	    		char choice87;
				printf("enter your choice:-");
	  scanf(" %c",&choice87);	
	  
	    switch(choice87)
	    
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
		    			
				}
				break;
				
				case '2':
				printf("show time is 9:45 pm\n");
				
				printf("&&&&\n");
				
				printf("show time is 10:45 pm\n");
				
				printf("press 1 for 9:45\n");
				
		    	printf("press 2 for 10:45\n");
		    	
				
				char choice88;
				printf("enter your choice:-");
	  scanf(" %c",&choice88);	
	  
	  
            break;		
					    	
		    	switch(choice88)
		    	{
		    		case '1':
		    			printf("you enter in 9:45 arena\n\n");
		    			
		    			printf("movie list is given below\n\n");
		    			
		    			printf("press 1 for c1 \n");
		    			
	  		printf("prees 2 for c2\n");
	  		
	  		
	  		printf("prees 3 for c3\n");
	  			char choice89;
				printf("enter your choice:-");
	  scanf(" %c",&choice89);	
	    
	    switch(choice89)
	    {
	    	case '1':
	    		printf(" press 1 for 300 $  normal sofa\n\n");
printf(" press 2 for 400 $  normal+ sofa\n\n");
printf(" press 3 for 450 $  normal sofa\n\n");	    		
	    	
				char choice90;
				printf("enter your choice:-");
	  scanf(" %c",&choice90);	
	  
	    switch(choice90)
	    
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
				case '3':
				printf("show time is 5:00 pm\n");
				
				printf("&&&&\n");
				
				printf("show time is 4:30 pm\n");
				
				printf("press 1 for 5:00\n");
		    	printf("press 2 for 4:30\n");
				
				char choice91;
				printf("enter your choice:-");
	  scanf(" %c",&choice91);	
	  
	  
            break;		
					    	
		    	switch(choice91)
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
	  
	  
	  }
	  break;
	  
    }
 	
 }
 
