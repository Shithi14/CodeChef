#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,d,s,f;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        s=a+b;
        f=c+d;
        if(s>f)
            printf("%d\n",f);
        else
            printf("%d\n",s);
    }
}
