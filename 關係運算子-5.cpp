#include <stdio.h> // �w�����J���Y�� �A �o�ˤ~��ϥ�  printf �B  scanf �C 
int main()   // �D�{�����_�l�I �A �b���槹���� int �|�^�Ǥ@�Ӿ�ơA  �|�����污�p �C 
{
    int score;   // �ŧi�@�Ӿ���ܼƦW�� score �A�d�۵��|�x�s user ��J���ƭ� �C 
    printf("Please enter your score:");  
    scanf("%d", &score);  // ���B�O��J�ƭ� �A���x�s�� score �C 
    if (score >= 60)    // ��J���ƭȭY�O�j��ε��� 60 �N�|Ĳ�o if ������P�_�� �A �ð���o�q�{���X  �C 
        printf("Congratulations, you passed!");
        
    if (score < 60)   // ��J���ƭȭY�O�p�� 60 �N�|�Ұʳo�q�{���X �A �N�|Ĳ�o if ������P�_�� �A �ð���o�q�{���X  �C 
        printf("You are not qualified!");
        
    return 0; // ���槹���A �N�|�^�Ǿ�� 0 �A��ܵ{�����榨�\�C 
}


