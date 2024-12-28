#include<stdio.h>
int main ()
{
    int T,M,N,i,mul;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d%d",&N,&M);
        mul=N*5+M*7;
        printf("%d\n",mul);
    }
}
