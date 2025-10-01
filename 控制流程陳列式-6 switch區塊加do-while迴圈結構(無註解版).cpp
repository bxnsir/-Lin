#include <stdio.h>   
int main()           
 
{
    char T;      
   
    do    
    {
    printf("Input one of a, b, c:");
    scanf(" %c", &T);     
    
    while(getchar() != '\n');    
    
    switch (T)     
        {
          case 'a':    
        	{
            printf("Apple");
            break;     
            }
            
          case 'b':   
        	{
            printf("Banana");
            break;    
            }
            
          case 'c':   
        	{
            printf("Cake");
            break;    
            }
            
          default:      
        	{
            printf("You select nothing.\n");
            }
            
        }  
     
   }
  while (!(T == 'a' || T == 'b' || T == 'c'));   
  
  return 0;    
  
}
