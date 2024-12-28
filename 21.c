#include<stdio.h>
int main ()
{
    int X,Y,T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d%d",&X,&Y);
        if(X>Y)
        {
            printf("A\n");
        }
        else
        {
            printf("B\n");
        }
    }
        return 0;
    }

