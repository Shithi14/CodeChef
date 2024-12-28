#include<stdio.h>
int main ()
{
    int T,X,Y,i,s;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d%d",&X,&Y);
        s=X*Y;
        printf("%d\n",s);
    }
}
