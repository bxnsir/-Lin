#include <stdio.h>   //  預先載入輸出、輸入標頭檔，這樣才能使用 getchar 、 scanf 、 printf
int main()           //  主程式的起始點，執行完畢後會由 int 回傳一個整數回報執行狀況 
 
{
    char T;    // 宣告一個1 byte 的字元變數 ， 名為 T  ， 待會將用來儲存user輸入的字元      
   
    do    // 此為最外層迴圈 do-while 的起始點 ，整個迴圈將運作至少一次，直到結尾的判斷式中，判斷條件是否符合來決定是否持續迴圈 ， (1)為持續迴圈、(0)為中止迴圈 
   {
    printf("Input one of a, b, c:");
    scanf(" %c", &T);     /*  user輸入a、b、c任一選項儲存進 T ， & 會找到 T 的記憶體位置，並將字元儲存進去。
	                          %c 前面多加一個空格並不是輸出空格，其作用是告知編譯器此處要忽略 Tab \t 、 換行符 \n 跟空格 ，避免迴圈時重複輸入、讀取到造成錯誤  */
    
    while(getchar() != '\n');    /*  getchar() 會讀取並清除緩存區內的一個暫存字元 ， while是將此設定為迴圈，會持續清除單一個字元後迴圈在清除 ，
	                                 != '\n' 設定為迴圈清除直到 \n 為止 ， 這樣若是後續需要迴圈到 scanf 讓 user 重新輸入數值，避免 scanf 誤讀到殘留資料   */ 
    
    switch (T)     // 主要判斷式， 小括號 () 會讀取 user 輸入儲存到 T 內的字元，並與 case 分支進行對比 ， 取出相符的 case 分支並啟動程式碼 
        {
          case 'a':    // case 分支 'a'  ， 若與 T 中儲存的字元相符 ，將啟動此分支 
        	{
            printf("Apple");
            break;     /* 啟動 分支 'a' 的程式碼後，將由此分支內的 break 強制中止 switch 區塊，並將控制權轉移到下一個陳述式  (此為 case分支 的標準寫法) 
			              如果沒有 break 強制中止 switch 區塊 ， 將會連同後續分支也接連跟著啟動 （稱為「貫穿」fall-through）   */
            }
            
          case 'b':    // case 分支 'b'  ， 若與 T 中儲存的字元相符 ，將啟動此分支  
        	{
            printf("Banana");
            break;     /* 啟動 分支 'b' 的程式碼後，將由此分支內的 break 強制中止 switch 區塊，並將控制權轉移到下一個陳述式   (此為 case分支 的標準寫法) 
            			  如果沒有 break 強制中止 switch 區塊 ， 將會連同後續分支也接連跟著啟動 （稱為「貫穿」fall-through）   */
            }
            
          case 'c':    // case 分支 'c'  ， 若與 T 中儲存的字元相符 ，將啟動此分支  
        	{
            printf("Cake");
            break;     /* 啟動 分支 'c' 的程式碼後，將由此分支內的 break 強制中止 switch 區塊，並將控制權轉移到下一個陳述式   (此為 case分支 的標準寫法)
						  如果沒有 break 強制中止 switch 區塊 ， 將會連同後續分支也接連跟著啟動 （稱為「貫穿」fall-through）   */ 
            }
            
          default:     // 當所有 case 分支選項 都不符合時，將自動啟動 default 內部程式碼 ， 而 default 通常都不需要 break  
        	{
            printf("You select nothing.\n");
            }
            
        }  
     
   }
  while (!(T == 'a' || T == 'b' || T == 'c'));   /* 此為最外層迴圈 do-while 的終點與判斷式，會透過小括號()內直接輸入的數值或運算單元得出的結果，
                                                    來判定是否持續迴圈 ，  (1)為持續迴圈、(0)為中止迴圈  */ 
  
  return 0;    // 當程式執行完畢後，會回傳整數 0 給作業系統 
  
}
