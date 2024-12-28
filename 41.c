#include<stdio.h>
int main ()
{
    int T,X,Y,Z,s;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d%d",&X,&Y,&Z);
        s=4*X+2*Y+0*Z;
        printf("%d\n",s);
    }
    return 0;
}
