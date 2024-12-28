
#include<stdio.h>
int main ()
{
    int X,T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&X);
        if(X>=6)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
