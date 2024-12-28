#include<stdio.h>
int main ()
{
    int X,N,T,i,t;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d%d",&X,&N);
        t=(X*N)/10;
        printf("%d\n",t);
    }
}
