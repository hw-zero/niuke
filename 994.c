#include <stdio.h>
#include <string.h>
int main()
{
    int a[256];
    char str[10000];
    int i, j, max, len, flag;
    while (scanf("%s", str) != EOF)
    {
        max = 0;
        flag = 0; //初始值为0
        len = strlen(str);
        for (i = 0; i < 256; i++)
            a[i] = 0;
        for (i = 0; i < len; i++) //计算要统计字符的个数
            if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] < '9') || str[i] == ' ')
                a[str[i]]++;
        /*         for(i=0;i<256; i++)
            printf("%d ",a[i]);
        printf("\n"); */
        for (i = 0; i < 256; i++)
        {
            if (a[i] == 0) //对应字符个数为0，则执行下一次循环
                continue;
            else
                flag = 1; //对应字符个数不为0,flag=1即不全为0
            if (flag == 0)
                break;
            max = 0;
            for (j = 0; j < 256; j++) //找到字符串中出现次数最多的字符次数
                max = a[j] > max ? a[j] : max;
            printf("max=%d\n", max);
            for (j = 0; j < 256; j++) //按照ASCII码顺序依次输出出现次数最多的字符
            {
                /*                 if(a[j]==0)
                    continue; */
                if (a[j] == max)
                {
                    printf("%c", j);
                    a[j] = 0;
                }
            }
        }
        printf("\n");
    }
}