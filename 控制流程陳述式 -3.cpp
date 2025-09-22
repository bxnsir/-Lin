#include <stdio.h>   // 預先載入輸出、輸入標頭檔，這樣才能使用 printf 跟 scanf  

int main()   // 主程式的起始點，執行完畢後會由 int 回傳一個整數回報執行狀況 
{
    int i;   // 宣告一個4 byts 的整數變數 ， 名為 i  ， 待會將用來儲存 user 輸入的數值 
    
    printf("Please input a number:");
    scanf("%d", &i);   // & 將取得 i 的記憶體地址 ， 並讓 user 在 %d 此輸入數值 ， 並儲存進 i 中 
    
    /*  i%2 會將 user 輸入的數值除與 2 ，最終如果除盡得到 0 (false) 將會被邏輯非運算子 ! 給翻轉成 1 (true) ，
	    而沒有除盡將得到 1 (true) ，在被邏輯非運算子 ! 翻轉成為 0  (false)  
		最終結果為 1 (true) 將達成 判斷式 (if) 啟動條件     */
    if (!(i%2))     
    {
         printf("It is an even number.");
    }
	    
    else     // 當判斷式 (if) 沒有啟動 ， 就會執行 else  
    {
        printf("It is an odd number.");
    }
	    
     return 0;    //   當程式執行完畢後，會回傳整數 0 給作業系統 
}


