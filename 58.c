#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, k, n;
    int str[1000];
    int c[1];
    while (scanf("%d%d", &n, &k) != EOF)
    {
        for (i = 0; i < n; i++) //输入
        {
            scanf("%d", &str[i]); //&千万不要忘了
        }
        for (i = 0; i < n - 1; i++) //排序
        {
            for (j = 0; j < n - 1 - i; j++)
            {
                if (str[j] > str[j + 1]) //从小到大排序
                {
                    c[0] = str[j];
                    str[j] = str[j + 1];
                    str[j + 1] = c[0];
                }
            }
        }
        for (i = 0; i < k; i++) //输出
        {
            printf("%d ", str[i]);
        }
        printf("\n");
    }
    return 0;
}