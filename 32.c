//思路：从后往前扫描字符串，按顺序输出
#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000];
    int len;
    int i, j, n, M, N;
    int flag;
    while (gets(str))
    {
        flag = 0;
        len = strlen(str);
        for (i = 0; i < len; i++)
            if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            {
                M = i;
                break;
            }
        for (i = len - 1; i >= 0; i--)
            if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            {
                N = i;
                break;
            }
        n = N + 1;
        for (i = N; i >= M; i--)
        {

            if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
                flag = 0;                                                         //出现字母flag变为0
            if ((str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')) //出现非字母字符
            {
                if (flag == 0)
                {
                    for (j = i + 1; j < n; j++)
                        printf("%c", str[j]);
                    printf("*");
                }
                n = i;
                flag = 1;
            }
            if (i == M)
            {
                for (j = M; j < n + 1; j++)
                    printf("%c", str[j]);
            }
        }
        printf("\n");
    }
    return 0;
}