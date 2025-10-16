#include <stdio.h>   // 預先載入輸出、輸入標頭檔，這樣才能使用 pirintf 
int main()   //  主程式的起始點， int會在程式執行完畢後回傳一個整數給作業系統，回報執行狀況 
{
    int j, sum;   //  宣告兩個 4 bytes 的整數變數，名為 j 與 sum  ，待會用做 for 迴圈陳述式 

    for (j=1, sum=0; j<=3; sum+=j*j, j++)    /*  for 迴圈陳述式，首先初始化賦值 j=1 、 sum=0 ，並且中間有使用 逗號運算子, 將兩個變數串聯在同一個初始化陳述式之中 
	                                             設定迴圈條件式為 j<=3 ， 
												 在設定更新式 sum+=j*j  與 j++ ，同樣有使用逗號運算子, 將兩個運算元串聯在同一個更式陳述式之中     
												    ( 更新陳述式是在整段迴圈都執行完畢之後，最後才會進行更新)                
													( sum+=j*j 為賦值運算子 ， 會先讓j*j 在與 sum 當下的數值相加，最後得出來的數值再重新賦予給 sum 做為最終數值 )  */
															
															                 
    {
	switch(j)   // switch選擇結構，設定條件為 j的值 ，使得迴圈時，會依序打開 case 1 ~ case 3 
       {
       case 1:
        printf("第一次迴圈:\nj=%d , sum=%d \n",j, sum);    // 第一次迴圈：j=1, sum=0 → 執行 switch → 執行更新式 → sum=1, j=2
        break;    // 這將會中止 最內層迴圈 ，即 switch選擇結構 ，讓控制權重新回到 for迴圈 
        
       case 2:
        printf("\n第二次迴圈:\nj=%d , sum=%d \n",j, sum);  // 第二次迴圈：j=2, sum=1 → switch → 更新式 → sum=5, j=3
        break;    // 這將會中止 最內層迴圈 ，即 switch選擇結構 ，讓控制權重新回到 for迴圈 
        
       case 3:
        printf("\n第三次迴圈:\nj=%d , sum=%d \n",j, sum);  // 第三次迴圈：j=3, sum=5 → switch → 更新式 → sum=14, j=4 
        break;    // 這將會中止 最內層迴圈 ，即 switch選擇結構 ，讓控制權重新回到 for迴圈 
       }
    
    }
    printf("\n迴圈中止:\nj最終值:%d\nsum最終值:%d",j,sum);    /* 第三次迴圈結束時，更新式會再運作一次 sum+=j*j , j++ ，
	                                                             這就導致了 j 與 sum 實際上經歷了四次變值 (第一次為 初始化j=1, sum=0; ) ，
																 而迴圈僅設定三次，因此第四次變值就額外進行顯示，而不是在迴圈內顯示    */ 
    
    return 0;
}
