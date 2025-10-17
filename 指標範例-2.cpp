#include <stdio.h>  //  預先載入輸出、輸入標頭檔，這樣才能使用 printf 

int main()   // 主程式的起始點，執行完畢後會由 int 回傳一個整數回報執行狀況  

 {
    int score = 85;          // 宣告一個 4 Bytes 的整數變數，名為 score ，並儲存數值 85 
    int *address = &score;   // 宣告一個 8 Bytes 指標型態名為 address ， 並儲存 score 的記憶體地址 
    
    int value = *address;    /* 宣告一個 4 Bytes 的整數變數，名為 value ，並且利用指標運算子* ， 取得指標型態 *address 之中所儲存的記憶體地址上所存取的真正內容物 
	                            其流程為  value (變數名稱) → *address (儲存內容物) → &score (內容物所指向的容器) → 85 (容器內的實際內容物)   */
    

    printf("原始分數 (score): %d\n", score);             //  使用%d ， 顯示 score 的原始分數  
    printf("指標儲存的地址 (address): %p\n", address);   //  使用%p ， 顯示儲存於 address 之中，其 &score 容器的記憶體地址 
    printf("取出的內容 (*value): %d\n",value);           //  使用%d ， 顯示儲存於 value 之中，其 *address 之內的 &score 容器所存取的內容物 

    *address = 100;    // // 透過指標 *address 修改其指向的變數 score 的內容，將原本的舊值 85 覆蓋修改為 新值 100
    
    printf("修改後的原始分數 (score): %d\n", score);   // 將新變數值 100 給顯示出來 

    return 0;   // 當程式執行完畢後，會回傳整數 0 給作業系統  
}

