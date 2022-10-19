LeetCode Logo
题库
0

avatar
所有状态
所有语言
通过
2022.09.06
C
解答错误
2022.09.06
C
执行出错
2022.09.06
C
执行出错
2022.09.06
C
执行出错
2022.09.06
C
执行出错
2022.09.06
C
执行出错
2022.09.06
C
关闭
Dragonヘ
Dragonヘ
2022.09.06 16:28

详情
写题解
C
时间
0 ms
击败
100 %
内存
6 MB
击败
9.87 %
点击图片查看分布详情
备注
在此输入备注
相关标签
选择标签
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
控制台

运行
提交
9. 回文数 - 力扣（Leetcode）
