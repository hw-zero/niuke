/* 判断是否为回文字符串 */
#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], s[101];
    int i, len, mid, next, top;
    gets(a);
    len = strlen(a);
    mid = len / 2 - 1;
    printf("mid=%d", mid);
    top = 0;
    for (i = 0; i <= mid; i++)
        s[++top] = a[i];
    printf("top=%d", top);
    if (len % 2 == 0)
        next = mid + 1;
    else
        next = mid + 2;
    printf("next=%d", next);
    for (i = next; i <= len - 1; i++)
    {
        if (a[i] != s[top])
            break;
        top--;
    }
    if (top == 0)
        printf("YES");
    else
        printf("NO");
    return 0;
}