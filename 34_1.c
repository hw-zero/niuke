#include <stdio.h>
#include <string.h>
char c[1024];
void quicksort(int left, int right)//字符快速排序
{
    int i, j;
    char t,temp;
    if (left > right)
        return;
    temp = c[left];
    i = left;
    j = right;
    while (i != j)
    {
        while (c[j] >= temp && i < j)
            j--;
        while (c[i] <= temp && i < j)
            i++;
        if (i < j)
        {
            t = c[i];
            c[i] = c[j];
            c[j] = t;
        }
    }
    c[left] = c[i];
    c[i] = temp;
    quicksort(left, i - 1);
    quicksort(i + 1, right);
}
int main()
{
    while (scanf("%s", c) != EOF)
    {
        int i;
        int len = strlen(c);
        quicksort(0, len-1);
        for (i = 0; i < len; i++)
            printf("%c", c[i]);
        printf("\n");
    }
    return 0;
}