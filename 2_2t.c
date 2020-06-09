/* 判断是否为回文字符串 */
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int i, len, mid, flag = 1;
    gets(a);
    len = strlen(a);
    mid = len / 2;
    for (i = 0; i < mid; i++)
    {
        if(a[i] != a[len - 1 - i])
        {
            flag = 0;
            break;    
        }
    }
    if(flag == 1)
        printf("YES");
    else
        printf("NO");
    return 0;
}