#include <stdio.h>    // 預先載入輸出、輸入標頭檔，這樣才能使用 printf 跟 scanf 
int main()      // 主程式的起始點，執行完畢後會由 int 回傳一個整數回報執行狀況
{
    int age, sex;   // 儲存兩個整數變數 分別名為 age , sex ， 待會將用來儲存 user 輸入的數值
    printf("Input your age:");
    scanf("%d", &age);    //  & 將取得 age 的記憶體地址 ， user 在此輸入第一組數值，儲存進入 age 當中
    
    if(age>=12)  // 主要判斷式，將判斷 user 輸入的數值是否 大於等於 12 ， 若大於等於 12 結果為 1 真 (true)，將啟動主要判斷式中的次要判斷式，反之則直接跳到末尾 
    {
        printf("Lady(0) or gentleman(1):");  
        scanf("%d", &sex);  // 次要判斷式中， user 首先將輸入第二組數值 ，並儲存於 sex 之中 
        
       /*  第一組次要判斷式， if 將利用 不等於運算子 ( != ) 與 邏輯與運算子 ( && )  來判斷 sex 中是否確實是 0 或者 1 兩個數字，而非其他數字  */
        if (sex != 0 && sex != 1)  /* 假使 sex 數字為 7 ，將同時 不等於 0 與 1 兩個數字，邏輯與運算子 ( && ) 將得出結果為 1 真 (true)  ，並啟動if判斷式中的程式。 
		                            而sex 數字為 0 或者 1 時 ，至少會有一個算式是 有等於 ， && 將得出結果為 0 假 (false) ，從而不啟動 if 判斷式，直接跳過 */ 
        {
            printf("Invalid input! \n"); //  次要判斷式中的 if 啟動後將顯示這段程式碼，代表 user 的數值輸入錯誤 
			
			return 1; // 代表程式執行錯誤，使用者錯誤輸入數值，並回傳一個整數 1 回報給系統 
        }
        
        
        else // 次要判斷式中的 if 沒有啟動的話將啟動次要判斷式中的 else  ，而裡面又包含了第二組次要判斷式 
        {
            if(sex) // 這裡將提取 sex 中的數值，如果是 0 將被判斷為 假 (false) 並跳過到 else ，而只要是任何非 0 數值 ，都將被判定為 1 真 (true)，並啟動 if判斷式 
                printf("Pay $60 for the ticket.");   // if判斷為 1 真 (true) 將啟動這段程式碼 
            else   //   sex 中的數值，如果是 0 將被判斷為 假 (false) 並跳過到 else  ，並啟動 else 中的程式瑪 
                printf("Pay $50 for the ticket."); 
        }
    
    
    }
    
    else   // 這是主要判斷式中的 else ，當主要判斷式 if 的啟動條件未達成，將直接跳過中間所有的次要判斷式與程式碼，直接來到這裡做為結尾 
        printf("You are too young to see this movie.");
        
    return 0; // 代表程式成功執行完畢，並回傳一個整數 0 回報給系統 
}



