#include <stdio.h>
int main()

{
    int j, sum; 

    for (j=1, sum=0; j<=4; sum+=j*j, j++);  
    printf("%d\n", sum);
    
    for (j=1, sum=0; j<=4; sum-=j*j, j++);  
    printf("%d\n", sum);
    
    return 0;
}
