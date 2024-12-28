#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {

        int a,b,c,s,h;
        scanf("%d%d%d",&a,&b,&c);
        s=a*2+b*2;
        h=s*c;
        printf("%d\n",h);

    }
}
