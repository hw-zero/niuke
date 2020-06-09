#include <stdio.h>
int main()
{
    int i, n, N, num, flag;
    int c[10] = {0};
    while (scanf("%d", &N) != EOF)
    {
        num = 0;
        for (i = 1; i <= N; i++)
        {
            flag = 0;//清标志位
            if (i % 7 == 0)
                flag = 1;
               //num++;
            else//既含7也是7的倍数时不能重复计算
            {
                n = i;
                while (n != 0) 
                {
                    if (n % 10 == 7)
                        flag = 1;
                        //num++;
                    n = n / 10;
                }
            }
            if (flag == 1)
               num++;
        }
        printf("%d\n\n", num);
    }
    return 0;
}