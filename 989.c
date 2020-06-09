//自守数
#include <stdio.h>
#include <math.h>
int f(int x);
int main()
{
    int i, j, n, sum; //sum：个数和
    int t;
    while (scanf("%d", &n) != EOF)
    {
        sum = 0;
        //t = 1; //初始化
        /*         printf("f(n)=%d\n", f(n));
        for (i = 1; i <= f(n); i++)
            t *= 10;
        printf("t=%d\n", t);  */
        for (i = 1; i <= n; i++)
        {
            t = 1; //初始化
            //printf("f(i)=%d\n", f(i));
            for (j = 1; j <= f(i); j++)
                t *= 10;
            //printf("t=%d\n", t);
            if ((i * i - i) % t == 0) //判断是否为自守数
            {
                sum++;
                //printf("i=%d ", i);
            }
        }
        printf("%d\n", sum+1);
    }
    return 0;
}
int f(int x)
{
    int temp = 0; //temp：数字的位数
    while (1)
    {
        if (x >= 0 && x <= 9)
            return (temp + 1);
        else
        {
            temp++;
            x = x / 10;
        }
    }
}