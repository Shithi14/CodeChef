#include<stdio.h>
int main ()
{
    int T,X,H;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&X,&H);
        if(X>=H)
            printf("YES\N");
        else
            printf("NO\n");
    }
    return 0;
}
