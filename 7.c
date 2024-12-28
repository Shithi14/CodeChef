#include<stdio.h>
int main ()
{
    int X,T,i;
    scanf("%d",&X);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&X);
        if(X>=2000)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
