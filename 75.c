/* 题目标题：
计算两个字符串的最大公共字串的长度，字符不区分大小写
详细描述：
接口说明
原型：
int getCommonStrLength(char * pFirstStr, char * pSecondStr);
输入参数：
char * pFirstStr //第一个字符串
char * pSecondStr//第二个字符串 */
#include <stdio.h>
#include <string.h>
int getCommonStrLength(char *, char *);
int main()
{
    char str1[1000], str2[1000];
    char *pFirstStr, *pSecondStr;
    int max;
    int i;
    pFirstStr = str1;
    pSecondStr = str2;
    while(scanf("%s%s", pFirstStr, pSecondStr) != EOF)
    { 
        //scanf("%s", pSecondStr);  
        //统一转成小写
        i = 0;
        while(*(pFirstStr + i) != '\0')
        {
            if(*(pFirstStr + i) >= 'A' && *(pFirstStr + i) <= 'Z')
                *(pFirstStr + i) += 32;
            i++;
        }
        //printf("pFirstStr: %s\n", pFirstStr);
        i = 0;
        while(*(pSecondStr + i) != '\0')
        {
            if(*(pSecondStr + i) >= 'A' && *(pSecondStr + i) <= 'Z')
                *(pSecondStr + i) += 32;
            i++;
        }
        //printf("pSecondStr: %s\n", pSecondStr);
/*         strlower(pFirstStr);
        strlower(pSecondStr);
        printf("pFirstStr: %s\n", pFirstStr);
        printf("pSecondStr: %s\n", pSecondStr);  */
        max = getCommonStrLength(pFirstStr, pSecondStr);
        printf("%d\n", max);
    }  
    return 0;
}
int getCommonStrLength(char *pFirstStr, char *pSecondStr)
{
    int max = 0, num = 0;
    int i, j;
    int m, n;
    int len1 = strlen(pFirstStr);
    int len2 = strlen(pSecondStr);
    char max[1000], num[1000]; 
    for(i = 0; i < len1; i++)
    {
        for(j = 0; j < len2; j++)
        {
            if(*(pFirstStr + i) == *(pSecondStr + j))
            {
                m = i;
                n = j;
                num++;
                i++;
                j++;
                while(*(pFirstStr + i) == *(pSecondStr + j))
                {
                    num++;
                    i++;
                    j++;
                }
                if(num > max)
                    max = num;
                num = 0;
                i = m;
                j = n;
            }
        }
    }

    return max;
}