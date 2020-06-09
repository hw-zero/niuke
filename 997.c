#include <stdio.h>
int main()
{
    int m, num1 = 0, num2 = 0, sum = 0;
    float avr;
    while (scanf("%d", &m) != EOF)
    {
        if (m < 0)
            num1++;
        else
        {
            sum += m;
            num2++;
        }
    }
    avr = (float)sum / num2;
    printf("%d\n%.1f\n", num1, avr);
    return 0;
}