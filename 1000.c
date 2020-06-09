//最小公倍数等于两数之积除以最大公约数
#include <stdio.h>
int main()
{
    int m, n, i;
    int num, temp; //temp：最大公因子
    while (scanf("%d%d", &m, &n) != EOF)
    {
        temp = 1;
        if (m % n == 0)
            num = m;
        if (n % m == 0)
            num = n;
        if (m % n != 0 && n % m != 0)
        {
            for (i = 2; i < m, i < n; i++)
                if (m % i == 0 && n % i == 0)
                    temp = i;
            num = m * n / temp;
        }
        printf("%d\n", num);
    }
    return 0;
}