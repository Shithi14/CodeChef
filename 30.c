#include<stdio.h>
int main ()
{
    int T,N;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&N);
        if(N%2==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
