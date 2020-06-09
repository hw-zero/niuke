/*这一题的关键是要将各个步骤分开进行避免出错*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    while (scanf("%s", str) != EOF)
    {
        int i, j, N;
        int flag = 0;
        char c[1000];
        for (i = 0; i < 1000; i++)
            c[i] = '0';
        int max = 0, count = 0;
        int len = strlen(str);
        for (i = 0; i < len; i++) //计算max
        {
            if (str[i] >= '0' && str[i] <= '9')
                count++;
            if (str[i + 1] < '0' || str[i + 1] > '9')
            {
                if (count > max)
                    max = count;
                count = 0;
            }
        }
        //printf("max=%d\n", max);
        for (i = 0; i < len; i++) //计算flag
        {
            if (str[i] >= '0' && str[i] <= '9')
                count++;
            if (str[i + 1] < '0' || str[i + 1] > '9')
            {
                if(count == max)
                    flag++;
                count = 0;
            }
        }
        //printf("flag=%d\n", flag);
        N = 0;
        for (i = 0; i < len; i++) //将max长度的数列存入数组c
        {
            if (str[i] >= '0' && str[i] <= '9')
                count++;
            if (str[i + 1] < '0' || str[i + 1] > '9')
            {
                if (count == max)
                {
                    for (j = i + 1 - max; j < i + 1; j++)
                        c[j - i - 1 + max + N * max] = str[j];
                    N++;
                }
                count = 0;
            }
        }
        for (i = 0; i < flag * max; i++) //输出
            printf("%c", c[i]);
        printf(",%d\n", max);
    }
    return 0;
}