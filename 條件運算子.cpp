#include <stdio.h>   // �ޤJ�зǿ�J��X�禡�w

int main()
{
    int score;       // �ΨӦs��J������
    char ifPass;     // �ΨӦs�P�_���G (Y �� N)

    printf("Please input your score: "); // ���ܨϥΪ̿�J
    scanf("%d", &score);                 // �ϥΪ̦b����J�ƭȨ���scanf�N��J�����Ʀs���b&score����m�W  

    ifPass = (score >= 60) ? 'Y' : 'N';    /* �ϥΤT���B��l ( ? : ) �P�_ score �O�_�j�󵥩� 60�C 
	�p�G score >= 60�A�h ifPass �Q��Ȭ� 'Y'�]�N��) �A �p�G score < 60�A�h ifPass �Q��Ȭ� 'N'�]�N���ή�^ */
  
    printf("You get %c.\n", ifPass);     //  �ϥ� %c �|�H�r���覡������X Y �� N �����G ( �Y�ϥ� %d �|�ܦ���XASCII�����r�� ) 

    return 0;  // �{�������A�^�� 0
}

