#include <stdio.h> // �ޤJ�зǿ�J/��X�禡�w�A�Ω�printf�Mscanf
#include <string.h> // �ޤJ�r��B�z�禡�w�A�Ω�strlen

int main()
{
   
    
    char binary[11];  // �ŧi�@�Ӧr���}�C���x�s�ϥΪ̿�J���G�i��r��
    int decimal = 0;  // �ŧi�@�Ӿ���ܼƨ��x�s�Q�i�쵲�G�A��l�Ȭ�0
    int i = 0;  //���ŧi�@�Ӿ���ܼƦW�� i  �Ω�R��j�� for ���p�ƾ� �C 

    printf("�п�J�@��10�Ӧr�������G�i��r��: ");
    scanf("%s", binary);  // �b����J�Q�ӼƭȥH�����G�i��r�� 

    // �ˬd��J���G�i��r��O�_����
    int length = strlen(binary); // ���o��J�r�ꪺ����
    for (i = 0; i < length; i++)
    {
        // �p�G�r�ꤤ������r�����O '0' �� '1'�A�h��J�L��
        if (binary[i] != '0' && binary[i] != '1')
        {
            printf("�L�Ŀ�J�I�п�J���Ī��G�i��r��C\n");
            return 1; // �����{���ê�^���~�X
        }
    }

    // �N�G�i��r���ഫ���Q�i��
    for (i = 0; i < length; i++)
    {
        
        decimal <<= 1;  // �N�Q�i�쵲�G�V�����ʤ@��A�o���P��N�䭼�H2
        decimal |= (binary[i] - '0');  // �N��e�r�� (binary[i]) �ഫ����� (0 �� 1) �å[��Q�i�쵲�G��
    }

    
    printf("�Q�i�쵲�G�O: %d\n", decimal);  // ��X�̲ת��Q�i�쵲�G

    return 0; // �{�����\����ê�^0
}

