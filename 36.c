#include<stdio.h>
int main ()
{
    int a,b,c,T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a>b && a>c)
        {
            if(b>c)
                printf("%d\n",b);
            else
                printf("%d\n",c);
        }
       else  if(b>a && b>c)
        {
            if(a>c)
                printf("%d\n",a);
            else
                printf("%d\n",c);
        }
       else  if(c>a && c>b)
        {
            if(a>b)
                printf("%d\n",a);
            else
                printf("%d\n",b);
        }
    }
}
