//求立方根
#include <stdio.h>
int main()
{
    double m, n, x, y;
    double i, j;
    while (scanf("%lf", &m) != EOF)
    {
        i = 1.0;
        j = 0.1;
        while (i < 1000)
        {
            x = i * i * i;
            y = (i + 1) * (i + 1) * (i + 1);
            if (x <= m && m < y)
            {
                n = i;
                break;
            }
            i += 1.0;
        }
        while (j < 0.9)
        {
            x = (n + j) * (n + j) * (n + j);
            y = (n + j + 0.1) * (n + j + 0.1) * (n + j + 0.1);
            //printf("j=%f,x=%f,y=%f\n",j,x,y);
            if (x <= m && m <= y)
            {
                if ((m - x) <= (y-m))
                    n += j;
                else
                    n += (j + 0.1);
                break;
            }
            j += 0.1;
        }
        printf("%.1f\n", n);
    }
    return 0;
}