#include <stdio.h>    //  預先載入標頭檔案 <stdio.h> ， 這樣才能使用 printf 、 scanf 
int main()    // 主程式起始點 
{   
 int i;    // 宣告一個整數變數名為 i ，用來等會儲存 user 輸入的整數 
    printf("Input a number:");
    scanf("%d", &i);    //  user 在此輸入任意整數 
    
    
    /*  此處將利用 邏輯非運算子 ( ! ) 與 取餘數運算子 ( % )  ， 並以兩個獨立 判斷式 ( if ) 來判斷  i  是奇數還是偶數   */
    
    if(!(i%2))     //    假如: i = 8 (偶數) ， i % 2 = 0 (false) ， 在透過 ( ! ) 翻轉成  1 (true)  ，即可啟動第一個  if 判斷條件 ， 反之 i 為奇數 則會被翻轉成  0 (false)， 將無法啟動 if 
        printf("even number.");
        
    if(i%2)       /*    由於此處不是使用 else if 或 else ，而是另一個獨立判斷式 if ， 因此即使第一個 if 啟動 ，第二個 if 也依然會進行判斷 ， 
	                    而第二個 if 由於沒有 !  因此奇數結果的 1 (true) 不會被翻轉成 0 (false)  ， 所以 i 為奇數的話 ， 第二個 if 判斷條件將得到滿足並啟動   */
        printf("odd number.");
        
return 0;  // 程式結束，並回傳一個整數值 0 給系統
 
}


