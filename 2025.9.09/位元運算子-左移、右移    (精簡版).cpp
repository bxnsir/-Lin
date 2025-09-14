#include <stdio.h> // 引入標準輸入/輸出函式庫，用於printf和scanf
#include <string.h> // 引入字串處理函式庫，用於strlen

int main()
{
   
    
    char binary[11];  // 宣告一個字元陣列來儲存使用者輸入的二進位字串
    int decimal = 0;  // 宣告一個整數變數來儲存十進位結果，初始值為0
    int i = 0;  //先宣告一個整數變數名為 i  用於充當迴圈 for 的計數器 。 

    printf("請輸入一個10個字元內的二進位字串: ");
    scanf("%s", binary);  // 在此輸入十個數值以內的二進位字串 

    // 檢查輸入的二進位字串是否有效
    int length = strlen(binary); // 取得輸入字串的長度
    for (i = 0; i < length; i++)
    {
        // 如果字串中的任何字元不是 '0' 或 '1'，則輸入無效
        if (binary[i] != '0' && binary[i] != '1')
        {
            printf("無效輸入！請輸入有效的二進位字串。\n");
            return 1; // 結束程式並返回錯誤碼
        }
    }

    // 將二進位字串轉換為十進位
    for (i = 0; i < length; i++)
    {
        
        decimal <<= 1;  // 將十進位結果向左移動一位，這等同於將其乘以2
        decimal |= (binary[i] - '0');  // 將當前字元 (binary[i]) 轉換為整數 (0 或 1) 並加到十進位結果中
    }

    
    printf("十進位結果是: %d\n", decimal);  // 輸出最終的十進位結果

    return 0; // 程式成功執行並返回0
}

