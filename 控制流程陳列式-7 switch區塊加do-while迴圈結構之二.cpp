#include <stdio.h>   // 預先載入輸出、輸入標頭檔，這樣才能夠使用printf、sacnf 
int main()    // 主程式的起始點，執行完畢後會由 int 回傳一個整數回報執行狀況  
{
    int N;    // 宣告一個4 bytes 的整數變數並命名為 N ， 待會將用來儲存 user 儲存的數值 
    int input_status;    // 宣告一個4 bytes 的整數變數並命名為 input_status ， 待會將用來儲存 scanf 回傳的項目數量  
    char G = 'X';        /*  宣告一個字元變數並命名為 G ， 待會將用來儲存系統得到的 case 結果，此處先儲存的字元 X ，是為了避免留空白，讀取到隨機位元資料中的垃圾值
	                         因此先賦予字元 X 進行初始化保存，後續再替換掉 X 即可，這樣可確保程式碼的健全度  */
    
    do   // 這是 do-while 迴圈的起始點。迴圈內的程式碼至少會執行一次，迴圈為 外層迴圈 ，將使用case中的break 或 迴圈尾端 while 判斷式中的運算單元進行迴圈中止 。  
    {

    printf("Input score:");
    input_status=scanf("%d", &N);   // user 在此輸入一個整數儲存進 N ，並且 scanf 會回報給 input_status 表示成功儲存了一個項目，此時 input_status儲存內容為 1 
    while (getchar() != '\n');      /*   getchar() 會以迴圈的方式，在這段程式碼中將緩存區的內容，也就是 user 輸入的數值給一圈一字的清除掉。
			   != '\n' 則是在迴圈清除緩存區時，迴圈到最後一個字元 \n ，不等於運算子 != 會因為迴圈讀取到 \n 跟 儲存內容 \n 是相等 ，而給出 0 false ，中止清除迴圈                       
			   此迴圈放在此處，會在 user 輸入完數值讓scanf讀取後，就立即清除留在緩存區裡的垃圾檔，避免後續如果需要再重新輸入，會造成混亂 */  
    
      if (input_status == 0 || N < 0 || N > 100)    //  第一個判斷式，會判斷input_status中儲存的項目數量是否為 1 ，以及 user 輸入的數值是否 小於0 或大於100   
        {
            printf("Error: Input must be an Arab numeral.\n");   // 判斷式達成條件將會啟動此處程式碼，這代表 user 輸入的數值有錯誤，待會需要重新輸入 
            continue;    /*  continue 會跳過本次迴圈中剩餘的陳述式，直達迴圈末尾的while() 條件判斷的位置直接進行判斷，
		                	 而由於此處 if 條件設定代表 user 輸入的數值是錯誤的，將無法達成while() 條件判斷而繼續進行迴圈，這將起到重新開始迴圈的效果   */
        }
    
    switch (N/10) // 主要判斷式， 小括號 () 會讀取 user 輸入儲存到 N 內的數值，與 10 相除並與 case 分支進行對比 ， 取出相符的 case 分支並啟動程式碼  
       {
           case 10:   // 當 switch 判斷式中的運算元得出 10 或 9 ，將會開啟此分支，並得到分支內的 G='A' ，以及 break 來進行中止 ，最終得出成績分類為 A 
           case 9:
            G='A';
            break;
            
           case 8:    // 當 switch 判斷式中的運算元得出 8 ，將會開啟此分支，並得到分支內的 G='B' ，以及 break 來進行中止 ，最終得出成績分類為 B 
            G='B';
            break;
            
           case 7:    // 當 switch 判斷式中的運算元得出 7 ，將會開啟此分支，並得到分支內的 G='C' ，以及 break 來進行中止 ，最終得出成績分類為 C  
            G='C';
            break;
            
           case 6:    // 當 switch 判斷式中的運算元得出 6 ，將會開啟此分支，並得到分支內的 G='D' ，以及 break 來進行中止 ，最終得出成績分類為 D 
            G='D';
            break;
            
        default:      /*  當 switch 判斷式中的運算元得出的數值，皆無法滿足以上所有case分支中的數值條件 ，就將會自動開啟此 default，並得到 G='F' ，
		                  以及 break 來進行中止 ，最終得出成績分類為 F    */
            G='F';
            
        }   
        
    }
    while (!(G=='A'||G=='B'||G=='C'||G=='D'||G=='F'));   /*  此為 do-while 迴圈的結尾判斷式，與 ( ) 內為設定為條件的運算單元 
	                                                                 倘若運算單元最終得出結果為 1 (true) 將持續迴圈 ， 得出 0 (false) 將中止回迴圈       
	                                                                 此處條件設定為 char G 之中儲存的字元為 'A' 至 'F'之間任一字元，將得出 1 (true) 
																	 再由 邏輯非運算子 ! 將 1 (true) 翻轉成 0 (false) ， 達成中止迴圈的條件    */
    
    printf("You get:%c", G);
    
    return 0; 
}
