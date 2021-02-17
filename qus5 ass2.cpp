#include<stdio.h> 

int main() 
{
  int i,j,N ;
  int c; 
  
 printf("enter N : "); 
 scanf("%d",&N); 
 
 c =N*2 - 1 ; 
  for (i=1;i<=c; j++) 
  {
    if(j==1||(j==c - i+1)) 
    {
	 printf("*"); 
} 
   else 
   {
      printf(""); 
} 
} 
printf("\n"); 
} 

