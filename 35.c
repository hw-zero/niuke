#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num[200][200] = {0};
    int i, j, k;
    int x;
    int n;
    while(scanf("%d", &n) != EOF)
    {
        x = 1;
        //初始化
        for(k = 1; k <= n; k++)
        {
            for(i = k - 1, j = 0; i >= 0, j < k; i--, j++)
            {
                num[i][j] = x;
                x++; 
            }
        }
        //输出
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n - i; j++)
            {
                printf("%d", num[i][j]);
                if(j < n - i -1)
                    printf(" ");
            }
            printf("\n");
        }
        //printf("\n");
    }
    return 0;
}