#include <stdio.h>
int main()
{
    int i, n, count1, count2, sum;
    int num;
    while (scanf("%d", &n) != EOF)
    {
        count1 = 0;
        count2 = 0;
        sum = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &num);
            if (num < 0)
                count1++;
            else if (num > 0)
            {
                count2++;
                sum = sum + num;
            }
        }
        printf("%d %.1f\n", count1, (float)sum / (float)count2);
    }
    return 0;
}