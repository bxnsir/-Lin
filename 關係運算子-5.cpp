#include <stdio.h> // 預先載入標頭檔 ， 這樣才能使用  printf 、  scanf 。 
int main()   // 主程式的起始點 ， 在執行完畢後 int 會回傳一個整數，  會報執行情況 。 
{
    int score;   // 宣告一個整數變數名為 score ，留著等會儲存 user 輸入的數值 。 
    printf("Please enter your score:");  
    scanf("%d", &score);  // 此處是輸入數值 ，並儲存於 score 。 
    if (score >= 60)    // 輸入的數值若是大於或等於 60 將會觸發 if 的條件判斷式 ， 並執行這段程式碼  。 
        printf("Congratulations, you passed!");
        
    if (score < 60)   // 輸入的數值若是小於 60 將會啟動這段程式碼 ， 將會觸發 if 的條件判斷式 ， 並執行這段程式碼  。 
        printf("You are not qualified!");
        
    return 0; // 執行完畢， 將會回傳整數 0 ，表示程式執行成功。 
}


