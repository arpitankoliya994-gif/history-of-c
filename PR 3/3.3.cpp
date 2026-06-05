#include<stdio.h>
int main()
{
	int a,b,c;
	int sum=0;
	
    printf("Enter Value of Number : ");  
	scanf("%d" , &a);   //123
	b=a;    //123
	
	do
	{
		 c=b%10;     // 3
		 sum=sum+c;   // 3
		 b = b/100;    // 1
    }while (b!=0);
    
    printf("sum of last and first digit:-%d",sum);
}
