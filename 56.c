#include <stdio.h>
#include <math.h>
int count(int);
int main()
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        printf("%d\n", count(n));
    }    
    return 0;
}
int count(int n)
{
    int num = 0;        //返回值
    int i, j, k;
    int sum;
    //找真因子
    for(i = 1; i <= n; i++)          //i % j    
    {
        sum = 0;
        //k = sqrt(i);
        printf("%d\n", k);
        for(j = 1; j < i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }
        if(sum == i)
            num++;
    }
    return num;
}