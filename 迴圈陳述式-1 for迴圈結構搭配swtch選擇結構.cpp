#include <stdio.h>    // 預先載入輸出、輸入標頭檔，這樣才能使用 printf 

int main()    // 主程式的起始點，int會在程式結束時回傳一個整數給系統做為回報 
{
    int j;    //  宣告一個 4 bytes 的整數變數名為 j ，待會將用來儲存 迴圈次數 

    for ( j = 1; j <= 9; j++)     /*   此為for 迴圈 ， 其判斷式結構為:  for ( [初始化]; [條件]; [更新] )  -  { 內容的程式碼 } 
	       j = 1  為初始化區塊 ，並賦予 J 為 整數 1 ，等同於設定迴圈自 第 1 圈 開始。 
	       j <= 9 為迴圈條件式 ，設定迴圈條件為 j 的數值若小於等於 9 ，就將判定為 1 真 (true)  ，並持續迴圈直到 j 的數值等於 9 為止，將判定 0 假 (false) 中止迴圈 
	       j++    為更新區塊 ， 設定 j 的數值會在每一次迴圈結束時，自動增進 1 個數值給下一次迴圈的 for 判斷式使用，已達到計算迴圈次數的目的         */
    {
        switch(j)     /* switch 選擇區塊，設定判斷式為 j 的數值，當有符合 j 數值的 case分支 將直接啟用該分支中的程式碼 ，
		                 而由於此 switch 選擇區塊是包含在 for迴圈 之內，因此 switch 選擇區塊也將持續啟動，直到整體迴圈中止  	*/
        {
        case 1:      // 當 j 數值為 1 時將啟動此 case分支 ，代表第一次迴圈，並有 break 中止該次 switch區塊執行 ，將控制權交給後續的 for迴圈區塊 繼續使用 
         printf("第一次迴圈:%d\n",j*j);
         break;
         
        case 2:      // 當 j 數值為 2 時將啟動此 case分支 ，代表第二次迴圈，並有 break 中止該次 switch區塊執行 ，將控制權交給後續的 for迴圈區塊 繼續使用 
         printf("第二次迴圈:%d\n",j*j);
         break;
         
        case 3:      // 當 j 數值為 3 時將啟動此 case分支 ，代表第三次迴圈，並有 break 中止該次 switch區塊執行 ，將控制權交給後續的 for迴圈區塊 繼續使用 
         printf("第三次迴圈:%d\n",j*j);
         break;
         
        case 4:      // 當 j 數值為 4 時將啟動此 case分支 ，代表第四次迴圈，並有 break 中止該次 switch區塊執行 ，將控制權交給後續的 for迴圈區塊 繼續使用 
         printf("第四次迴圈:%d\n",j*j);
         break;
         
        case 5:      // 當 j 數值為 5 時將啟動此 case分支 ，代表第五次迴圈，並有 break 中止該次 switch區塊執行 ，將控制權交給後續的 for迴圈區塊 繼續使用 
         printf("第五次迴圈:%d\n",j*j);
         break;
         
        case 6:      // 當 j 數值為 6 時將啟動此 case分支 ，代表第六次迴圈，並有 break 中止該次 switch區塊執行 ，將控制權交給後續的 for迴圈區塊 繼續使用 
         printf("第六次迴圈:%d\n",j*j);
         break;
         
        case 7:      // 當 j 數值為 7 時將啟動此 case分支 ，代表第七次迴圈，並有 break 中止該次 switch區塊執行 ，將控制權交給後續的 for迴圈區塊 繼續使用 
         printf("第七次迴圈:%d\n",j*j);
         break;
         
        case 8:      // 當 j 數值為 8 時將啟動此 case分支 ，代表第八次迴圈，並有 break 中止該次 switch區塊執行 ，將控制權交給後續的 for迴圈區塊 繼續使用 
         printf("第八次迴圈:%d\n",j*j);
         break;
		 
		case 9:      // 當 j 數值為 9 時將啟動此 case分支 ，代表第九次迴圈，並有 break 中止該次 switch區塊執行 ，將控制權交給後續的 for迴圈區塊 繼續使用 
         printf("第九次迴圈:%d\n",j*j);
         break;  
        }
        
    }
    
    return 0;    // 當程式執行完畢時，將會回傳一個整數 0 回報給系統 
}
