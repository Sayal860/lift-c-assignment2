# include <stdio.h> 
int main() 
{ 
     int n,sum=0,a,r ;    
     printf("enter a number ") ; 
     scanf("%d",&n); 
     
	 a=n; 
	 while(a!=0) 
	 { 
	   
     
         r=a%10; 
         sum=sum+r; 
         a=a/10 
        ; 
     }  
       printf("sum of digits=%d" , sum) ; 
	   
} 
	  

	 
