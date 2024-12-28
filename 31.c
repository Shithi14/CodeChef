#include<stdio.h>
int main ()
{
    int T,X,Y,s;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&X,&Y);
        s=10*X+90*Y;
        printf("%d\n",s);
    }
    return 0;

}
