#include<stdio.h> 
int main ()
{
  int g,s,n ; 
  int ar[10]; 
  printf("enter the number of elements :\n"); 
  scanf("%d",&n); 
  printf("enter the numbersin array:\n") ;
  for(int i;i<n;++i)
  {
    
    scanf("%d",&ar[i]); 
    
} 
s = ar[0]; 
g = ar[0]; 

for(int j=1 ; j<n;j++) 
{
  
  if(ar[j] <s) 
  {
   s=ar[j]; 
} 
if(ar[j]>g) 
{
  g=ar[j]; 
  
} 
} 

printf("\nlargest element is : %d",g); 
printf("\nsmallest element is : %d" , s); 
}
  
