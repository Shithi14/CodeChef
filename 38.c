#include<stdio.h>
int main ()
{
    int T,X;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&X);
        if(X*4<=1000)
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}
