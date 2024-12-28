#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,s;
        scanf("%d%d%d",&a,&b,&c);
        s=c-a;
        printf("%d\n",s);
    }
    return 0;
}
