#include <stdio.h>    // ���J�зǿ�J��X�禡�w�A���ڭ̥i�H�ϥΦp printf ���禡����ܵ��G�C

main()                // �{�����D�n�i�J�I�A�Ҧ� C �y���{�����O�q�o�Ө禡�}�l����C
{
    int A, B;         // �ŧi��Ӿ�ƫ��A���ܼ� A �M B�A�Ψ��x�s�ڭ̪��ƭȡC

    printf("A\tB\tA&&B\tA||B\t!A\n");      // �C�L��檺���D�A\t �O�w��r���A�ΨӽT�O A�BB �M�B�⵲�G�����C

    A=1, B=1;  // �Ĥ@�մ��աG�]�w A �M B ���D�s�ȡA�b�޿�W�Ҭ��u�u�v�C
   
    printf("%d\t%d\t%d\t%d\t%d\n", A, B, A&&B, A||B, !A);  // A, B������X�ƭȡAA&&B�MA||B�ѩ�A�BB��Ӽƭȳ����u�A�G�ҿ�X 1�A!A�����G��X0�C

    A=1, B=0;   // �ĤG�մ��աG�]�w A ���u�AB �����C
    
    printf("%d\t%d\t%d\t%d\t%d\n", A, B, A&&B, A||B, !A); // A, B������X�ƭȡC A&&B�ѩ�B�����]����X0�AA||B�ѩ�B������A���u�]����X 1�A!A�N�u�ܬ����A�G��X0�C

    A=0, B=1;    // �ĤT�մ��աG�]�w A �����AB ���u�C
    
    printf("%d\t%d\t%d\t%d\t%d\n", A, B, A&&B, A||B, !A);  // A, B������X�ƭȡC A&&B�ѩ�A�����]����X0�AA||B�ѩ�A������B���u�]����X 1�A!A�N���ܬ��u�A�G��X1�C
   
    A=0, B=0;   // �ĥ|�մ��աG�]�w A �M B �����s�]���^�C
    
    printf("%d\t%d\t%d\t%d\t%d\n", A, B, A&&B, A||B, !A);  // A, B������X�ƭȡAA&&B�MA||B�ѩ�A�BB��Ӽƭȳ������A�G�ҿ�X 0�A!A���u�C
} 


