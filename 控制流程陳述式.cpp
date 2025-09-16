#include <stdio.h>   // 預先載入輸出 、 輸入標頭檔 ， 這樣才能使用 printf 、 scanf 

int main()   // 主程式開始點 ， int 會在程式執行完畢後 ， 回傳一個整數報告程式執行狀況 
{
    int i;    // 宣告一個整數變數名為 i ， 等會用來儲存 user 輸入的整數 
    
    printf("Please input a number:");
    scanf("%d", &i);   // 在此輸入整數以供判斷是奇數還是偶數 
    
    if(i%2 == 0)   // 此處 判斷式 if 為判斷 user 輸入的整數是奇數還是偶數 ， i 會除與 2 並取出餘數與 0 進行關係運算子對比 ( == ) ， 若同為 0 代表此 i 為偶數則達成 if 的啟動條件 
    {
        printf("It is an even number.");
        return 0;     // 由於程式以判斷出 user 輸入的數值為偶數並得到答案 ， 因此程式可以在此直接結束 ， 因此加入return 0 
    }
    
    else   // 倘若 判斷式 if 未達成條件 ， 代表 i 為奇數 ， 則直接跳至 判斷式 else ， 由於 判斷式  else 未設置啟動條件 ， 將直接被開啟使用 
    {
    	printf("It is a odd number.");
	}
	
    return 0;
}


