#include "deposit.h"

int check(int s, int t)
{
if ((t <= 0) || (t > 365) || (s < 10000))
        return 1;
else
return 0;
}
float proffit(int x, int z)
{
    float cashback = x;
    if (x < 100000) {
        if ((z > 0) && (z <= 30))
            cashback *= 0.9;
        if ((z > 30) && (z <= 120))
            cashback *= 1.02;
        if ((z > 120) && (z <= 240))
            cashback *= 1.06;
        if ((z > 240) && (z <= 365))
            cashback *= 1.12;
    } else {
        if ((z > 0) && (z <= 30))
            cashback *= 0.9;
        if ((z > 30) && (z <= 120))
            cashback *= 1.03;
        if ((z > 120) && (z <= 240))
            cashback *= 1.08;
        if ((z > 240) && (z <= 365))
            cashback *= 1.15;
    }
    return cashback;
}
