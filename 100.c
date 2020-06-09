#include <stdio.h>
int main()
{
    int N;
    //int
    while (scanf("%d", &N) != EOF)
    {
        if (N > 0)
        {
            printf("%d\n", N * 2 + N * (N - 1) * 3 / 2);
            //return 0;
        }
        else
        {
            return -1;
        }
    }
    return 0;
}