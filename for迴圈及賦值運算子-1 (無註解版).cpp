#include <stdio.h>   
int main()   
{
    int j, sum;   

    for (j=1, sum=0; j<=3; sum+=j*j, j++)   
																								                 
    {
	switch(j)  
       {
       case 1:
        printf("第一次迴圈:\nj=%d , sum=%d \n",j, sum);    
        break;   
        
       case 2:
        printf("\n第二次迴圈:\nj=%d , sum=%d \n",j, sum);  
        break;    
        
       case 3:
        printf("\n第三次迴圈:\nj=%d , sum=%d \n",j, sum);  
        break;    
       }
    
    }
    printf("\n迴圈中止:\nj最終值:%d\nsum最終值:%d",j,sum);    
    
    return 0;
}
