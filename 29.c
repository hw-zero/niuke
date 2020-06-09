#include <stdio.h>
#include <string.h>
int main()
{
    char str1[200], str2[200];
    while (scanf("%s", str1) != EOF)
    {
        int i, j, k;
        int len1, len2;
        scanf("%s", str2);
        len1 = strlen(str1);
        len2 = strlen(str2);
        for (i = 0; i < len1; i++)
        {
            if (str1[i] >= 'a' && str1[i] < 'z')
                str1[i] = str1[i] - 31;
            else if (str1[i] == 'z')
                str1[i] = 'A';
            else if (str1[i] >= 'A' && str1[i] < 'Z')
                str1[i] = str1[i] + 33;
            else if (str1[i] == 'Z')
                str2[i] = 'a';
            else if (str1[i] >= '0' && str1[i] < '9')
                str1[i] = str1[i] + 1;
            else if (str1[i] == '9')
                str1[i] = '0';
        }
        for (i = 0; i < len2; i++)
        {
            if (str2[i] > 'A' && str2[i] <= 'Z')
                str2[i] = str2[i] + 31;
            else if (str2[i] == 'A')
                str2[i] = 'z';
            else if (str2[i] > 'a' && str2[i] <= 'z')
                str2[i] = str2[i] - 33;
            else if (str2[i] == 'a')
                str2[i] = 'Z';
            else if (str2[i] > '0' & str2[i] <= '9')
                str2[i] = str2[i] - 1;
            else if (str2[i] == '0')
                str2[i] = '9';
        }
        for (i = 0; i < len1; i++)
            printf("%c", str1[i]);
        printf("\n");
        for (i = 0; i < len2; i++)
            printf("%c", str2[i]);
        printf("\n");
    }
    return 0;
}