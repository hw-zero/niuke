#include <stdio.h>
int main()
{
    int year, month, day;
    while (scanf("%d%d%d", &year, &month, &day) != EOF)
    {
        int i, j, k, flag;
        int month1[13] = {0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int month2[13] = {0,31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {    //flag=1;
            printf("1\n");
            for (i = 0; i < month; i++)
                day += month1[i];
        }
        else
        {    //flag=0;
            printf("0\n");
            for (i = 0; i < month; i++)
                day += month2[i];
        }
        printf("%d\n", day);
    }
}