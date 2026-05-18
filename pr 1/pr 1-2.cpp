#include <stdio.h>
 main()
 
 {
 	printf("gross salary Calculator:-\n\n");
 	
 	float basesalary;
 	printf("enter the base salary:-");
 	scanf("%f",&basesalary);
 	
 	float HRA;
 	printf("enter HRA:-");
 	scanf("%f",&HRA);
 	
 		float DA;
 	printf("enter DA:-");
 	scanf("%f",&DA);
	 
	 	float TA;
 	printf("enter TA:-");
 	scanf("%f",&TA);
 	
 	float x;
 	
 	x=basesalary+ (HRA*basesalary)/100 + (DA*basesalary)/100 + (TA*basesalary)/100;
 	
 	printf("%f",x);
 	
 	
 }
