#include <stdio.h>
#include <string.h>
int main()
{
    int c1[256];
    char c2[1000];
    int i;
    int len;
    while (scanf("%s", c2) != EOF)
    {
        len = strlen(c2);
        for (i = 0; i < 256; i++)
            c1[i] = 0;
        for (i = 0; i < len; i++)
            c1[c2[i]]++;
        for (i = 0; i < len; i++)
        {
            if (c1[c2[i]] == 1)
            {
                printf("%c\n", c2[i]);
                break;
            }
            if (i == (len - 1))
                printf("-1\n");
        }
    }
    return 0;
}