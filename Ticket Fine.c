#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,s,h;
        scanf("%d%d%d",&a,&b,&c);
        s=b-c;
        h=a*s;
        printf("%d\n",h);
    }
    return 0;
}
