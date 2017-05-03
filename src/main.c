#include <stdio.h>
#include "deposit.h"

int main()
{
    int t, s;

    printf("enter time to deposit: \n");
    scanf("%i", &t);
    printf("enter sum to deposit: \n");
    scanf("%i", &s);
    if (check(s,t)==1)
        printf("enter correct data! \n");
    else {
        printf("sum at the end of: ");
        printf("%.0f \n", proffit(s, t));
        printf("proffit of deposit: ");
        printf("%.0f \n", proffit(s, t) - s);
    }
    return 0;
}


