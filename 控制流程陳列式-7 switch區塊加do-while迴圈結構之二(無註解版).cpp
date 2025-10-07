#include <stdio.h>
int main()
{
    int N;
    int input_status;
    char G = 'X';
    
    do
    {

    printf("Input score:");
    input_status=scanf("%d", &N);
    while (getchar() != '\n'); 
    
      if (input_status == 0 || N < 0 || N > 100)
        {
            printf("Error: Input must be an Arab numeral.\n");
            continue;
        }
    
    switch (N/10)
       {
           case 10:
           case 9:
            G='A';
            break;
            
           case 8:
            G='B';
            break;
            
           case 7:
            G='C';
            break;
            
           case 6:
            G='D';
            break;
            
        default:
            G='F';
            
        }   
        
    }
    while (!(G=='A'||G=='B'||G=='C'||G=='D'||G=='F'));
    
    printf("You get:%c", G);
    
    return 0; 
}
