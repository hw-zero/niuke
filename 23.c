#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    while (scanf("%s", str) != EOF)
    {
        int i, min = 100;
        int c[26] = {0};
        int len = strlen(str);
        for (i = 0; i < len; i++) //对字符串中的字母计数
            c[str[i] - 'a']++;
        for (i = 0; i < 26; i++) //判断字母出现的最小次数
            if (min > c[i] && c[i] > 0)
                min = c[i];
        //printf("%d\n",min);
        for (i = 0; i < len; i++) //对字符串中出现次数不是最少的字母输出
            if (c[str[i] - 'a'] != min)
                printf("%c", str[i]);
        printf("\n");
    }
    return 0;
}