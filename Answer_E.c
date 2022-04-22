#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d %d %d",&a,&b,&n);
    for (int i = 1; i <=n; ++i)
    {
        if(i%a!=0 && i%b!=0)
            printf("%d\n",i);
        else if(i%a==0 && i%b==0)
            printf("FizzBuzz\n");
        else if(i%a==0 && i%b!=0)
            printf("Fizz\n");
        else printf("Buzz\n");
    }

}
