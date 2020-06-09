#include <stdio.h>
int main()
{
    int n, len;
    int num[1000] = {0}, count[1000] = {0}; 
    int i, j;
    while(scanf("%d", &n) != EOF)
    {
        len = 1;
        for(i = 0; i < n; i++)
        {
            scanf("%d", &num[i]);   //初始化
            count[i] = 1;
        }
        for(i = 0; i < n; i++)      
        {
            for(j = 0; j < i; j++)
            {
                if(num[i] > num[j] && count[j] + 1 > count[i])
                {
                    count[i] = count[j] + 1; 
                }
            }
            if(count[i] > len)
            {
                len = count[i];
            } 
        }
        printf("%d\n", len);
    }
    return 0;
}