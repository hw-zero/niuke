#include <stdio.h>
int main()
{
    int m, n;
    while (scanf("%d", &m) != EOF)
    {
        int i, j, k;
        int c1[1000], c2[1000];
        for (i = 0; i < m; i++)
            scanf("%d", &c1[i]);
        scanf("%d", &n);
        for (i = 0; i < n; i++)
            scanf("%d", &c2[i]);
        for (i = m; i < m + n; i++)
            c1[i] = c2[i - m];
        for (i = 0; i < m + n - 1; i++)
            for (j = 0; j < m + n - 1 - i; j++)
                if (c1[j] > c1[j + 1])
                {
                    k = c1[j];
                    c1[j] = c1[j + 1];
                    c1[j + 1] = k;
                }
        for (i = 0; i < m + n; i++)
            printf("%d", c1[i]);
        printf("\n");
    }
    return 0;
}