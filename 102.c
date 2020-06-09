#include <stdio.h>
#include <string.h>
int main()
{
    int n[256];
    char str[1000];
    int i;
    int len, max;
    while (scanf("%s", str) != EOF)
    {
        max = 0;
        len = strlen(str);
        for (i = 0; i < 256; i++) //初始化
            n[i] = 0;
        for (i = 0; i < len; i++) //计数
        {
            n[str[i]]++;
            if (n[str[i]] > max)
                max = n[str[i]];
        }
        while (max)               //输出
        {
            for (i = 0; i < 256; i++)
            {
                if (n[i] == max)
                {
                    printf("%c", i);
                    //max--;
                }
            }
            max--;
        }
        printf("\n");
    }
    return 0;
}