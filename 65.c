/* 查找两个字符串a,b中的最长公共子串。若有多个，输出在较短串中最先出现的那个。 */
#include <stdio.h>
#include <string.h>
void fun(char *, char *);
int main()
{
    char a[1000], b[1000];
    char *p1, *p2;
/*     p1 = a;
    p2 = b; */
    while(scanf("%s %s", &a, &b) != EOF)
    {
        if(strlen(a) > strlen(b))
        {   
            p1 = b;
            p2 = a;
        }
        else
        {
            p1 = a;
            p2 = b;
        }
        
/*         printf("p1: %s\n", p1);
        printf("p2: %s\n", p2); */
        fun(p1, p2);
    }
    return 0;
}
void fun(char *p1, char *p2)
{
    int num = 0, max = 0;
    int i, j, k;
    int m, n;
    char x[1000], y[1000];
    //printf("x: %s\n", x);
    for(i = 0; i < strlen(p1); i++)
    {
        for(j = 0; j < strlen(p2); j++)
        {
            if(*(p1 + i) == *(p2 + j))
            {
                m = i;
                n = j;
                num++;
                x[num] = *(p1 + i);
                i++;
                j++;
                while(*(p1 + i) == *(p2 + j))
                {
                    num++;
                    x[num] = *(p1 + i);
                    i++;
                    j++;
                }
                if(num > max)
                {  
                    for(i = 1; i <= num; i++)
                    {
                        y[i] = x[i];
                    }  
                    max = num;
                }
                num = 0;
                i = m;
                j = n;
            }
        }
    }
    for(i = 1; i <= max; i++)
    {
        printf("%c", y[i]);
    }
    printf("\n");
}