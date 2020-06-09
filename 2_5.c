#include <stdio.h>
int main()
{
    int data[101], right[101] = {0};
    int i, n, t;
    scanf("%d", &n); //输入个数
    for (i = 0; i < n; i++)
    {
        scanf("%d", &data[i]); //输入数组元素
        right[i] = i + 1;//确定对应位数组元素下一个元素（排序上）的地址
    }
    scanf("%d", &data[n]); //输入新的元素
    for (i = 0; i <= n; i++)
    {
        if (data[right[i]] > data[n])
        {
            right[n] = right[i];
            right[i] = n+1;
            break;
        }
    }
    i=0;
    while (i!=(n+1))
    {
        printf("%d ",data[i]);
        i=right[i];       
    }
    return 0;
}