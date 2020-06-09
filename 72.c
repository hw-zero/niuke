#include <stdio.h>
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        //int a,b,c;
        int i, j, k;
        for (i = 0; i < 20; i++)
            for (j = 0; j < 35; j++)
            {
                k = 100 - i - j;
                if ((i * 5 + j * 3 + k / 3 == 100) && k % 3 == 0)
                    printf("%d %d %d\n", i, j, k);
            }
    }
    return 0;
}