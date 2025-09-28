#include <stdio.h>   // 預先載入輸出、輸入標頭檔，這樣才能使用 getchar 、 scanf 、 printf

int main()   // 主程式的起始點，執行完畢後會由 int 回傳一個整數回報執行狀況 
{
    int N;    // 宣告一個4 bytes 的整數變數 ， 名為 N  ， 待會將用來儲存 user 輸入的數值 
    char G;   // 宣告一個1 byte 的字元變數 ， 名為 G  ， 待會將用來儲存系統給出的字元 
    int input_status;    // 宣告一個4 byts 的整數變數 ， 名為 input_status  ， 待會將用來儲存 scanf 回傳的項目數量 

    do    // 這是 do-while 迴圈的起始點。迴圈內的程式碼至少會執行一次，迴圈為 外層迴圈 ，待會適用 break 進行中止 。 
	{
      printf("Please input your score (0-100): ");
      input_status = scanf("%d", &N);  // user在此輸入一個整數儲存進 N ，並且 scanf 會回報給 input_status 表示成功儲存了一個項目，此時 input_status儲存內容為 1 
        
        
        /*  第一個判斷式，透過關係運算子 ( == 、 >= 、 <= ) 與 邏輯運算子 ( && ) 確定 user 輸入的數值是否確實"是一個範圍在0~100之間的整數"。 
		    input_status == 1  會判斷 input_status 內儲存的項目是否為 1 個項目 ， N >= 0 、 N <= 100) 會分別判斷 N 是否大於等於 0 與 是否小於等於 100  
			 當三個運算元的結果都為 1 (真) true時 ， 邏輯運算子 && 就會判定整個運算單元為 1 (真) true 達成啟動條件，啟動 if判斷式    */ 
      if (input_status == 1 && N >= 0 && N <= 100)   
	      {
            break;   // break 可中止此do-while的迴圈，並將控制權交給後續的陳述式，這裡代表 user 輸入的數值是正確無誤，可以繼續運作後續的程式碼功能 
          } 
          
          
        /*   第二個判斷式，當第一個判斷式沒有達成啟動條件並啟動break中止迴圈，那將來到第二個判斷式 */ 
      if (input_status != 1)   // (input_status != 1) 將換判斷 input_status內的項目數量是否不等於 數字 1 ，以此判斷 user 是否錯誤輸入了非數字字元 造成錯誤    
		  {
            printf("Error: Input must be an Arab numeral.\n");
            while(getchar() != '\n');  // ，此為最內層迴圈， 用來清除緩存區字元的迴圈 
		  /*   getchar() 會以迴圈的方式，在這段程式碼中將緩存區的內容，也就是 user 輸入的數值給一圈一字的清除掉。
			   != '\n' 則是在迴圈清除緩存區時，迴圈到最後一個字元 \n ，不等於運算子 != 會因為迴圈讀取到 \n 跟 儲存內容 \n 是相等 ，而給出 0 false ，中止清除迴圈                       
			   清除迴圈結束後，由於沒有 break 中止迴圈 ，因此整個do-while將重新回到迴圈起始點，達成讓 user 重新輸入數值的目的  */
          } 
          
      else  // 當兩個判斷式都沒有達成啟動條件後將直接啟動 else ，並且因為else也沒有break中止迴圈 ，因此整個do-while將重新回到迴圈起始點
	   	  { 
            printf("Error: Score must be between 0 and 100.\n");
          }
        
    } 
    while (1);  // 這是 do-while 迴圈的起始點。 () 內設定為 1 代表 do-while 永遠為 真 (true) ，此迴圈才能持續運作，直到使用 break 進行中止 
    
    
    if (N >= 90)        // 判斷是否大於等於90 ， 條件達成啟動後 G 將賦予字元 A  ，若沒有則跳過。 
    {
        G = 'A';
    }
    
    else if (N >= 80)   // 判斷是否大於等於80 ， 條件達成啟動後 G 將賦予字元 B  ，若沒有則跳過。 
    {
        G = 'B';
    }
    
    else if (N >= 70)   // 判斷是否大於等於70 ， 條件達成啟動後 G 將賦予字元 C  ，若沒有則跳過。 
    {
        G = 'C'; 
    }
    
    else if (N >= 60)   // 判斷是否大於等於60 ， 條件達成啟動後 G 將賦予字元 D  ，若沒有則跳過。
    {
        G = 'D';
    }
    
    else                //  當以上條件全部都沒有達成，將直接啟動else ， G 將賦予字元 F 
    { 
        G = 'F';
    }
    
    printf("You get: %c\n", G);  //  顯示最終的成績結果 
    
    return 0;   // //   當程式執行完畢後，會回傳整數 0 給作業系統  
}
