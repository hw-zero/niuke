#include <stdio.h>
#include <string.h>
int main()
{
    char c1[1000];
    while (scanf("%s", c1) != EOF)
    {
        int i, j;
        int X = 0;
        int flag = 1;
        int len1, len2;
        char c2[1000];
        //gets(c2);
        scanf("%s", c2);
        len1 = strlen(c1);
        len2 = strlen(c2);
        for (i = 0; i < len1; i++) //核心
        {
            for (j = 0; j < len2; j++)
            {
                if (c1[i] == c2[j])
                    break;
                if (j == len2 - 1)
                    flag = 0;
            }
            if (flag == 0)
            {
                X = -1;
                break;
            }
            if (i == len1 - 1)
                X = 1;
        }
        if (X == -1)
            printf("false\n");
        else if (X == 1)
            printf("true\n");
    }
    return 0;
}