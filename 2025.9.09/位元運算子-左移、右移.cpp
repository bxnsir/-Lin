#include <stdio.h> // �ޤJ�зǿ�J��X�禡�w
#include <string.h> // �ޤJ�r��B�z�禡�w�A�o�ˤ~��ϥ� strlen �p��r����סC 

int main()
{
    char binary[11]; // �Ω��x�s�ϥΪ̿�J���G�i��r�� �A �ѩ�]�w�r���e�q�� 11 �A �]���̰��i��J�Q�Ӽƭ� (�ĤQ�@�Ӧr���� \0 �o�����ê��r��פ��) �C 
    int decimal = 0; // ���ŧi�@�Ӿ���ܼƦW decimal �ΨӶi���l�ƫ��x�s 0 �A �H����O�����m�A����N�Ω��x�s�Q�i�쵲�G�Ө��N����� 0 �C 
    int i = 0;       // ���ŧi�@�Ӿ���ܼƦW�� i  �ζi���l�ƫ��x�s 0 �H����O�����m �A ����N���ΥR��j�� for ���p�ƾ� �C
    printf("Please enter a binary string within 10 characters: ");
    scanf("%s", binary); // �b����J�Q�ӼƭȥH�����G�i��r�� �A�æs�J binary ���� �A�ѩ� binary �O�r�ꫬ�A �A �����N�i�O�O�O�����}�A �] �����ݭn�H & �ӼаO�O����a�}�C 

    // �ˬd��J���G�i��r��O�_����
    int length = strlen(binary);  // strlen �|�p��  binary ���x�s�F�X�Ӧr���A�Ҧp: 0101 �N�|�p�⬰ 4 �Ӧr���A�ñN���G�^�Ǥ@�Ӿ���x�s�b length �̭��C 
    for (i = 0; i < length; i++)  /* �T�{ strlen �p�� length �����r�����׬O�_���T�A���j��W�h�A���ᤩ i = 0 �A�� i �� 0 �ΨӻP length ���x�s���r���i��  < �p��p�� 
       �A�C�j��B�⧹�@�� i�� 0 �N�|�W�i+1�A�̧Ǫ��� i���ƭȵ��P length ���ƭȬ���A�̲װj�骺���ƥ����P length �����ƭȬۦP  */
    { 
        if (binary[i] != '0' && binary[i] != '1') /* ���B�� binary[i] �����޹B��l �A�o�̪� i �|���o�W�q i++ �o�X���ƭȡA�����޹B��l���������r�� 
    �ûP != '0' �H�� != '1' �o�� ������B��l �i��P�_�P 0 �� 1 �O�_���۵� �A�ó̲צA��  && �޿� AND �B�� �ӽT�{�A
	�խY ��̵��G�O���P���� && �N�|���o �� (false) �A if �����{���X�N���|�Q�ҰʡA�ë���j���  binary �����C�@�Ӧr���ˬd���o��F  �� (false)�����G �A�i�J�U�@�B �A 
	�Ӧp�G ��̵��G�O�ۦP������ && �N�|���o �u�]true�^ �A �o�� if �����{���X�N�|�Q�ҰʡA �̲צ^�� return 1 �i��{���X���� �A �ð���{���B�@�A 
    �ѩ� binary �n�D���O��J �G�i�� �A�]�� binary ���s�J���@�w�O 0 �P 1 �A�o�ˤ��׬O�ĴX�쪺�r���@�w�� �P != '0' �H�� != '1' �ܤ֨䤤�@�ӬO������A
	�i�p�G���~��J�F0�P1�H�~���ƭȡA�Ҧp 5 �A���̲׻P  != '0' �H�� != '1'  �i��p��A���G���N�O ������ �A �ɭP && �P�_�|�o�X �u�]true�^�����G�A�F������ if �� �{���X������C 
		 */
		 
        {
            printf("Invalid input! Please enter a valid binary string.\n"); //��e�q if �r���ˬd �A&& �P�_�� �u�]true�^ �A�N�N�Ұʳo�����{���X�A�|��ܵ{��������~ 
            return 1; // �{�������æ^�ǿ��~�X 1  
        }
    } 

    // �N�G�i��r���ഫ���Q�i��
    for (i = 0; i < length; i++)
    {   
        decimal <<= 1; // �ϥν�ȹB��l (<<=) ���ƭȦV���첾�@��A�Ҧp: 0010 ( �Q�i�� 2 ) ���줧��|�ܬ� 0100 ( �Q�i�� 4 )�A�۷�󭼥H 2 ���\�� �C 
        decimal |= (binary[i] - '0'); /*  binary[i]�|Ū���@�Ӧr���A�å�  - '0' ���ܦ��ƭ� �A�Ҧp i=1 (�r��) �A�ഫ���ܦ��Q�i��ƭ� 1 �C
   |=  �ƦX��ȹB��l  �|����  decimal �����ƭȻP  (binary[i] - '0') �����ƭȶi��  �줸OR�B�� �A �ç�p�⵲�G�ᤩ  decimal
   ²��ӻ� �|�N���������@��ƭȪ�  decimal �P  binary[i] �����ഫ���ƭȪ��Ʀr �A ��ӥ[�A�@�_ �A �̫�A�ᤩ�� decimal �A �êu�Ψ�U�@��p��o��s�ƭ� �A ����j��̫�@�� �A �N�O���סC 
    �Ҧp     decimal ����O 4 �A�b�����@��� �ܦ� 8 �A�� binary[i] �O 1 �A�]�N�O 8 + 1  = 9  �A �̲׳o�@�骺 decimal �ƭȴN�O 9 �A�êu�ε��U�@��ϥ�  �A ����̫�@�� �C 
	*/ 
    }   

    printf("The decimal result is: %d\n", decimal);

    return 0; // �{�����`����
}
