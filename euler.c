#include <stdio.h>
int three_five(int n)
{
    int sum = 0;
    int i;
    for (i = 0; i < n; ++i)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }

    return sum;
}

int gcd(int a, int b)
{
    if (a % b == 0)
    {
        return b;
    }
    return gcd(b, a % b);
}

int lcm_ab(int a, int b)
{
    return a * b / gcd(a, b);
}
int lcm_upto(int n)
{
    int lcm = 1;
    int i;
    for (i = 2; i < n; ++i)
    {
        lcm = lcm_ab(lcm,i);
    }
    return lcm;
}