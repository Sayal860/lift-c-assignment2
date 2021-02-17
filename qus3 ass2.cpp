#include<stdio.h> 
int main() 
{
     char s[200]; 
     int c,i ; 
     c=0; 
     
     printf("enter the string:\n"); 
     scanf("%[^\n]s",s); 
     for (i =0;s[i] !='\0';i++) 
     {
	   
	   c++ ; 
} 
 printf("number of words in given string are:%d\n" , c+1); 
} 
 
