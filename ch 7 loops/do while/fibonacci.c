#include<stdio.h>
main()
{
	 int a , i;
	 int c=0,d=1;
	 printf("Enter a number : " );
	 scanf("%d" , &a);
	 
	 for( i=1; i<=a; i++)
	 { 
	   printf("%d\t" , c); //0
	   int  x=c+d;    //0+1=1 //2 //3 
	   c=d;  //c=1 //1  /// 2 
	   d=x; //d=1 //2  \\3 
	   
	   
	 }
}
