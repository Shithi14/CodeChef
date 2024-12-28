#include<stdio.h>
int main ()
{
    int T,N,X,Y;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d%d",&N,&X,&Y);
        if(N>=(X+Y*2))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
