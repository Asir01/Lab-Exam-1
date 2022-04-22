#include<stdio.h>
int main()
{
    int a,b,c,x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    a=x+y,b=y+z,c=z+x;
    if(a < b && a < c)
    {
        printf("%d\n",a);
    }
    else if(b < c)
    {
        printf("%d\n",b);
    }
    else
    {
        printf("%d\n",c);
    }
        return 0;
}
