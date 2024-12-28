
    #include<stdio.h>
    int main ()
    {
        int X,Y,T;
        scanf("%d",&T);
        while(T--)
        {
            scanf("%d%d",&X,&Y);
            if(X>Y)
                printf("LOSS\n");
            else if(X<Y)
                printf("PROFIT\n");
            else
                printf("NEUTRAL\n");
        }
        return 0;
    }
