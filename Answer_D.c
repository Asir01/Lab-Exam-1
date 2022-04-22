#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float sum=0.0;
    for (int i = 0; i < n; ++i)
    {
        float a,b;
        scanf("%f %f",&a,&b);
        sum=sum+(a*b);
    }
    printf("%.5f\n",sum);
}
