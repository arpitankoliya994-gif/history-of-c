#include <stdio.h>
main()
{
	int size1,size2;
  printf("enter the size of array:-");
  scanf("%d",&size1);
   
  
  int i;
  
  int a[size1];
  int b[size1];
  
  int c[size1 + size1];
  
  int *p1,*p2,*p3;
  printf("enter the first array input:-\n");
  
  for(i=0 ; i<size1 ; i++)
  {
  	scanf("%d",&a[size1]);
  }
    printf("enter the second array input\n");
 for(i=0 ; i<size1 ; i++)
  {
  	scanf("%d",&b[size1]);
  }
  p1=a;
  p2=b;
  p3=c;
   
  for(i=0 ; i<size1 ; i++)
  {
  	c[i] = a[i]+b[i];
  	
	  }
	  for(i=0 ; i<size1 ; i++)
  {
  	printf("%d",&c[i]);
  	
	  }
}
