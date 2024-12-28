#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,s,d;
        scanf("%d%d",&a,&b);
        if(a>b)
        {
            s=7-a;
            printf("%d\n",s);
        }
        else
        {
            d=7-b;
            printf("%d\n",d);
        }
    }
}
