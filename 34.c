/* 排序题 */
#include <stdio.h>
#include <string.h>
int main()
{
    char c[1024];
    while (scanf("%s", c) != EOF)
    {
        int i, j;
        char s;
        //char c2[1024];
        int len = strlen(c);
        for (i = 0; i < len - 1; i++) //冒泡排序
            for (j = 0; j < len - 1 - i; j++)
                if (c[j] > c[j + 1])
                {
                    s = c[j + 1];
                    c[j + 1] = c[j];
                    c[j] = s;
                }
        for (i = 0; i < len; i++)
            printf("%c", c[i]);
        printf("\n");
    }
    return 0;
}