LeetCode Logo
���
0

avatar
����״̬
��������
ͨ��
2022.09.06
C
������
2022.09.06
C
ִ�г���
2022.09.06
C
ִ�г���
2022.09.06
C
ִ�г���
2022.09.06
C
ִ�г���
2022.09.06
C
ִ�г���
2022.09.06
C
�ر�
Dragon��
Dragon��
2022.09.06 16:28

����
д���
C
ʱ��
0 ms
����
100 %
�ڴ�
6 MB
����
9.87 %
���ͼƬ�鿴�ֲ�����
��ע
�ڴ����뱸ע
��ر�ǩ
ѡ���ǩ
0 / 5
bool isPalindrome(int x) {
    int array[50];
    int barray[50];
    int i, j, l;
    if (x < 0)
    {
        return false;
    }
    if (x / 10 == 0)
    {
        return true;
    }
    for (i = 0; x > 0; i++)
    {
        array[i] = x;
        x = x / 10;
    }

    l = i;
    i = 0;
    for (j = 0; j < l - 1; j++, i++)
    {
        barray[j] = array[i] - array[i + 1] * 10;

    }
    barray[j] = array[l - 1];

    for (j = 0; j < l; j++)
    {
        if (barray[j] != barray[l - j - 1])
            return false;

    }
    return true;
}
����̨

����
�ύ
9. ������ - ���ۣ�Leetcode��
