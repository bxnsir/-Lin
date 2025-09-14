#include <stdio.h> // 預先載入標頭檔 ， 這樣才可以使用  printf 、  scanf 。 

int main() // 主程式的起始點 ， 在執行完畢後 int 會回傳一個整數，  會報執行情況 。 
 {
    int score; // 宣告一個整數變數 ， 名為 score ， 等會將讓 user 輸入任意數值 

    printf("Please enter your score:");
    scanf("%d", &score); // 此處輸入數值 

    if (score < 0 || score > 100) //使用 邏輯或 (or) 先分別判斷分數是否低於 0 與高於 100 ， 以此來檢查分數是否在 0 至 100 之間 。 倘若低於 0 與高於 100 ， 滿足中一件條件則啟動 if 程式 。 
	{
        printf("input error!");
    }  
    
    else if (score >= 60)  // 當上一段 if 的條件判斷皆沒有滿足，  則來到  else if 進行判斷是否 分數 大於等於 60 ，倘若條件滿足則啟動  else if 的程式  。 
	{
        printf("Congratulations, you passed!");
    }
    
    else   // 當上一段 else if 的條件判斷沒有滿足 ， 則來到  else ， 由於  else 沒有設定條件判斷式 ， 因此直皆啟動。 
	{
        printf("You are not qualified!");
    }

    return 0; // 執行完畢， 將會回傳整數 0 ，表示程式執行成功。  
}

