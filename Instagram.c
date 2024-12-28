
#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,s;
        scanf("%d%d",&a,&b);
        if(a>b*10)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
