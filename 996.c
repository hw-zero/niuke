//字符串分割
#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, j, k, N, T; //N,T表示字符串的长度是8*N+T
    char len[1000], str[1000][1000];
    while (scanf("%d", &n) != EOF)
    {
        N=0;
        T=0;
        for (i = 0; i < n; i++) //输入字符串，并计算字符串的长度
        {
            scanf("%s",str[i]);
            len[i] = strlen(str[i]);
        }
        for (i = 0; i < n; i++)
        {
            if (len[i] % 8 == 0)//字符串的长度是8的倍数
            {
                if (len[i] == 8)//字符串的长度等于8
                {
                    for (j = 0; j < 8; j++)
                        printf("%c", str[i][j]);
                    printf("\n");
                }
                if (len[i] > 8)//字符串的长度大于8
                {
                    N = len[i] / 8;
                    for (j = 0; j < len[i]; j++)
                    {
                        printf("%c", str[i][j]);
                        if ((j + 1) % 8 == 0)
                            printf("\n");
                    }
                }
            }
            else//字符串的长度不是8的倍数
            {
                if (len[i] < 8)//字符串的长度小于8
                {
                    for (j = 0; j < len[i]; j++)
                        printf("%c", str[i][j]);
                    for (j = len[i]; j < 8; j++)
                        printf("0");
                    printf("\n");
                }
                if (len[i] > 8)//字符串的长度大于8
                {
                    N=len[i]/8;
                    T= len[i]%8;
                    for(j=0;j<N*8;j++)
                    {
                        printf("%c",str[i][j]);
                        if((j+1)%8==0)
                            printf("\n");
                    }
                    for(j=8*N;j<len[i];j++)
                        printf("%c",str[i][j]);
                    for(j=len[i];j<8*(N+1);j++)
                        printf("0");
                    printf("\n");
                }
            }
        }
    }
}