/* 
代码优化：
1.可以直接定义整数数组，而不必将计算值再转化为字符输出
2.取个位可以用求余%
3.求二者中的较大值可以用三目运算符
 */
#include <stdio.h>
#include <string.h>
int main()
{
    int i, j;
    char c[2][1000];
    while (scanf("%s%s", c[0], c[1]) != EOF)
    {
        int len[2];
        int m, n, l;
        int k = 0; //进位
        char t;
        for (i = 0; i < 2; i++)
            len[i] = strlen(c[i]);
        l = (len[0] > len[1]) ? len[0] : len[1];
        for (i = 0; i < 2; i++)
            for (j = len[i]; j < 1000; j++)
                c[i][j] = '0';
        for (i = 0; i < 2; i++) //交换
            for (j = 0; j < len[i] / 2; j++)
            {
                t = c[i][j];
                c[i][j] = c[i][len[i] - j - 1];
                c[i][len[i] - j - 1] = t;
            }
        for (i = 0; i <= l; i++)
        {
            m = c[0][i] - 48; //将字符转换为数字
            n = c[1][i] - 48;
            if (m + n + k >= 10)
            {
                c[0][i] = m + n + k + 38; //m+n+进位，保留个位后将数字转化为字符
                k = 1;
            }
            else
            {
                c[0][i] = m + n + k + 48; //m+n+进位，将数字转化为字符
                k = 0;
            }
        }
        if (c[0][l] == '1')
            l = l + 1;
        for (i = 0; i < l / 2; i++) //交换
        {
            t = c[0][i];
            c[0][i] = c[0][l - i - 1];
            c[0][l - i - 1] = t;
        }
        for (i = 0; i < l; i++) //输出
            printf("%c", c[0][i]);
        printf("\n");
    }
    return 0;
}
