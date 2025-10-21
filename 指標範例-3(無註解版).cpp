#include <stdio.h>     
#include <string.h>    

int main()     
{
    char array[] = "Hello";   
    char *ptr= array;        
    
    do   
	{
        printf("請輸入恰好五個字元: ");
        scanf("%5s", array);         
        while (getchar() != '\n');  

        int len = strlen(array);    
        if (len != 5)                 
		{
           printf("輸入的字元數不足，請重新輸入。\n\n");
        }

    } 
	while (strlen(array) != 5);   
	
    
    printf("\n--- 三種陣列地址表達式 ---\n");
    
    printf("1. \"%s\" 的地址(指向第一字元):            %p\n",   array,array); 
    printf("1. \"%s\" 的地址(指向第三字元):            %p\n",   array,array+2); 
    printf("1. \"%s\" 的儲存內容:                      %s\n\n", ptr,ptr); 
    
    printf("2. \"%s\" 的地址(指向第一字元):            %p\n",   array,&array[0]); 
    printf("2. \"%s\" 的地址(指向第四字元):            %p\n\n", array,&array[0]+3); 

    printf("3. 整個陣列 \"%s\" 的地址(指向第一字元):   %p\n",   array,&array);
    printf("3. 整個陣列 \"%s\" 的地址(跳過此陣列地址): %p\n\n", array,&array+1);
    
    printf("修改字串中的第一個字元「%c」，請輸入一個新字元:",array[0]);
    scanf(" %c",&array[0]);
    array[2] = 'E'; 
    printf("第一個字元已經修改為「%c」，同時第三個字元已經強制修改為「E」 \n\n",array[0]);
    
    while (getchar() != '\n');
    printf("請按任意鍵繼續:");
    getchar(); 
    
    
    printf("\n--- 容器內容物 ---\n");
    
    printf("array 容器內的儲存內容:      %s\n", array); 
    printf("array 容器內的第一個字元:    %c\n", ptr[0]); 
    printf("array 容器內的第五個字元:    %c\n", ptr[4]); 

    return 0;
}
