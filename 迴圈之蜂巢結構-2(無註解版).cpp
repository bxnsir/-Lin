#include <stdio.h>
main()
{
int A, B, C, P;  

for(A=0; A<=2; A+=1) 
  {
   for(B=2; B<=8; B+=2)   
       {
  	    for(C=3, P=-3; C<=9; C+=3, P-=3)  
  	       {
  	   	    printf("(%d,%d,%d)  ", A, B, P);
	       }
	       
	   }	
   printf("\n");  		
  } 

}


