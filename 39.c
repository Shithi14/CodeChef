#include<stdio.h>
int main ()
{
    int X,Y,T,s;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&X,&Y);
    if(X>Y)
    {


        s=X-Y;
        printf("%d\n",s);
    }
    else
    {

        printf("0\n");
    }
    }
}
