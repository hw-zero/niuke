#include <stdio.h>
int main()
{
    int i, j, k, t;
    int c[1000];
    int n;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n; i++)
            scanf("%d", &c[i]);
        scanf("%d", &k);
        for (i = 0; i < n - 1; i++)
            for (j = 0; j < n - 1 - i; j++)
                if (((c[j] > c[j + 1]) && k == 0) || ((c[j] < c[j + 1]) && k == 1))
                {
                    t = c[j];
                    c[j] = c[j + 1];
                    c[j + 1] = t;
                }
        for(i=0;i<n;i++)
            printf("%d ",c[i]);
        printf("\n");
    }
}
