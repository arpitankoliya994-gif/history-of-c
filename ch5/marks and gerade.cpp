#include <stdio.h>

 main()
  
  { 
    int a;
     printf("enter your marks:-");
    scanf("%d",&a);
    
     if(a<=100 && a>=91)
	 {
	 	printf("you got a1");
	 }
	 else if(a<=90 && a>=81)
	 {
	 	printf("you got a2");
	 }
	 
	 else if(a<=80 && a>=71)
	 {
	 	printf("you got b1");
	 }
	 else if(a<=70 && a>=61)
	 {
	 	printf("you got b2");
	 }
	 else if(a<=60 && a>=51)
	 {
	 	printf("you got c1");
	 }
	 else if(a<=50 && a>=41)
	 {
	 	printf("you got c2");
	 }
	 else if(a<=40 && a>=33)
	 {
	 	printf("you got d1");
	 }
	 else if(a<=33 && a>=0)
	 {
	 	printf("you are failed");
	 }
	 else 
	 { 
	 printf("please enter the vailed marks");
	 }
  }
 
