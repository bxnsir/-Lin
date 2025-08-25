#include <stdio.h>   // 引入標準輸入輸出函式庫

int main()
{
    int score;       // 用來存輸入的分數
    char ifPass;     // 用來存判斷結果 (Y 或 N)

    printf("Please input your score: "); // 提示使用者輸入
    scanf("%d", &score);                 // 使用者在此輸入數值並讓scanf將輸入的分數存取在&score的位置上  

    ifPass = (score >= 60) ? 'Y' : 'N';    /* 使用三元運算子 ( ? : ) 判斷 score 是否大於等於 60。 
	如果 score >= 60，則 ifPass 被賦值為 'Y'（代表) ， 如果 score < 60，則 ifPass 被賦值為 'N'（代表不及格） */
  
    printf("You get %c.\n", ifPass);     //  使用 %c 會以字元方式直接輸出 Y 或 N 的結果 ( 若使用 %d 會變成輸出ASCII對應字元 ) 

    return 0;  // 程式結束，回傳 0
}

