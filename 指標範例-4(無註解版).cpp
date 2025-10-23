#include <stdio.h>   

int main()      
{
	
   const char *name[] =   
 
    {
     "rtx3050", "rtx3060", "rtx3070", "rtx3080","rtx3090"     
    };
      

   for (int j = 0; j <= 4; j++)     
    {
     printf("\n%s的字串容器指標記憶體地址       :%p\n", name[j], &name[j]);	   	
     printf("%s的內容數值記憶體地址初始點     :%p\n" , name[j], name[j]);      
     printf("%s的第三字元「x」記憶體地址      :%p\n\n", name[j], name[j]+2);   
     printf("----------------------------------------------------------------\n");
    }                                                                                              
    

   return 0;
}  
