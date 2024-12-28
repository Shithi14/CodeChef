#include<stdio.h>
int main ()
{
    int T,N,M,s;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&N,&M);
        s=N*M;
        printf("%d\n",s);
    }
    return 0;
}
