#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a!=b && b!=c && a!=c)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
