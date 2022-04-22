#include<stdio.h>
int main()
{
    int limit, num,negative = 0;
    scanf("%d", &limit);
    printf("", limit);
    while(limit)
    {
        scanf("%d", &num);
        if(num > 0)
        {

        }
        else if(num < 0)
        {
            negative++;
        }
        else
        {

        }

        limit--;
    }
    printf("%d", negative);
    return 0;
}
