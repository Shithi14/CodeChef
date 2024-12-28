#include<stdio.h>
int main ()
{
    int X,Y,T,i,sub;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d%d",&X,&Y);
        sub=X-Y;
        printf("%d\n",sub);
    }


}
