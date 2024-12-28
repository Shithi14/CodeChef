#include<stdio.h>
int main ()
{
    int T,X,Y,totalchocolate,totalcandy;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&X,&Y);
        totalchocolate=2*X;
        totalcandy=5*Y;
        if(totalchocolate>totalcandy)
            printf("Chocolate\n");
        else if(totalchocolate<totalcandy)
            printf("Candy\n");
        else
            printf("Either\n");

    }
    return 0;
}
