#include <stdio.h>

int proffit(int x,int z);

int main()
{
    int s,t;
    printf("enter time to deposit: \n");
    scanf("%i",&t);
    printf("enter sum to deposit: \n");
    scanf("%i",&s);
    if ((t <= 0) || (t > 365) || (s<10000))
    printf("enter correct data! \n");
    else
	{
		printf("sum at the end of: ");
        printf("%i",proffit(s,t));
    }
    return 0;
}
