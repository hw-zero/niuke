#include <stdio.h>
#include <string.h>
int f(char c1, char c2);
int main()
{
    int len, i, j;
    int flag;
    char str[10000];
    //char str1[10000];
    while (scanf("%s", str) != EOF)
    {
        len = strlen(str);
        flag = 0; //初始化
        for (i = 0; i < len; i++)
        {
            if (str[len - 1] >= '0' && str[len - 1] <= '9') //结尾特殊处理
            {
                printf("%c*", str[len - 1]);
                break;
            }
            if (i == len - 1)
                printf("\n");
            if (str[0] >= '0' && str[i] <= '9') //开头特殊处理
            {
                printf("*");
                //continue;
            }
            switch (f(str[i], str[i + 1]))
            {
            case 0:
            {
                flag = 0;
                printf("%c", str[i]);
                break;
            }
            case 1:
            {
                flag = 0;
                printf("%c*", str[i]);
                break;
            }
            case 2:
            {
                printf("%c", str[i]);
                if (flag == 0)
                {
                    printf("*");
                    flag = 1;
                }
                break;
            }
            case 3:
            {
                printf("%c", str[i]);
                flag = 1;
                break;
            }
            }
        }
    }
    return 0;
}
int f(char c1, char c2)
{
    if (c1 < '0' || c1 > '9') //c1不是数字
    {
        if (c2 < '0' || c2 > '9') //c2不是数字
            return 0;
        else //c2是数字
            return 1;
    }
    else //c1是数字
    {
        if (c2 < '0' || c2 > '9') //c2不是数字
            return 2;
        else //c2是数字
            return 3;
    }
}