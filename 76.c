#include <stdio.h>
int main()
{
    int m;
    while (scanf("%d", &m) != EOF)
    {
        int i = 1;
        int j;
        while (i <= m * m)
        {
            if (m * m * m != i * m + (m - 1) * m)
                i = i + 2;
            else
            {
                for (j = 0; j < m; j++)
                {
                    if (j != m - 1)
                        printf("%d+", i + j * 2);
                    else
                        printf("%d\n", i + j * 2);
                }
                break;
            }
        }
    }
    return 0;
}