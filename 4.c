#include <stdio.h>
#include <string.h>
int main()
{
    char str1[200], str2[200];
    while (scanf("%s%s", str1, str2) != EOF)
    {
        int i,j;
        int len1, len2;
        len1 = strlen(str1);
        len2 = strlen(str2);
        for (i = len1; i < 200; i++)
            str1[i] = '0'; //注意是'0'不是0
        for (i = len2; i < 200; i++)
            str2[i] = '0';
        if (len1 % 8 == 0)
        {
            for (i = 0; i < len1 / 8; i++)
            {
                for (j = i * 8; j < (i + 1) * 8; j++)
                    printf("%c", str1[j]);
                printf("\n");
            }
        }
        else
        {
            for (i = 0; i < (len1 / 8) + 1; i++)
            {
                for (j = i * 8; j < (i + 1) * 8; j++)
                    printf("%c", str1[j]);
                printf("\n");
            }
        }
        if (len2 % 8 == 0)
        {
            for (i = 0; i < len2 / 8; i++)
            {
                for (j = i * 8; j < (i + 1) * 8; j++)
                    printf("%c", str2[j]);
                printf("\n");
            }
        }
        else
        {
            for (i = 0; i < (len2 / 8) + 1; i++)
            {
                for (j = i * 8; j < (i + 1) * 8; j++)
                    printf("%c", str2[j]);
                printf("\n");
            }
        }
    }
    return 0;
}