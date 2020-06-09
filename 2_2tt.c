#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    int i, len, mid, next, top;
    gets(a);
    len = strlen(a);
    mid = len / 2;
    printf("mid=%d\n", mid);
    top = 0;
    for (i = 0; i < mid; i++)
        b[top++] = a[i];
    printf("top=%d\n", top);
    if (len % 2 == 0)
        next = mid;
    else
        next = mid + 1;
    printf("next=%d\n", next);
    for (i = next; i < len; i++)
    {
        if (a[i] != b[top - 1])
            break;
        top--;
    }
    printf("top=%d\n", top);
    if (top == 0)
        printf("YES");
    else
        printf("NO");
}