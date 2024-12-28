#include<stdio.h>
int main ()
{
    int T,X,Y,s;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&X,&Y);
        s=Y/X;
        printf("%d\n",s);
    }
    return 0;
}
