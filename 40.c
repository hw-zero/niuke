#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, k, n1, n2, n3, n4, len;
    char str[5000];
    while (gets(str) != NULL)
    {
        n1 = 0;
        n2 = 0;
        n3 = 0;
        n4 = 0;
        len = strlen(str);
        for (i = 0; i < len; i++)
        {
            if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
                n1++;
            else if (str[i] == 32)
                n2++;
            else if (str[i] >= 48 && str[i] <= 57)
                n3++;
            else
                n4++;
        }
        printf("%d\n%d\n%d\n%d\n", n1, n2, n3, n4);
    }
    return 0;
}