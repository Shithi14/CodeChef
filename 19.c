#include<stdio.h>
int main ()
{
    int T,X,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&X);
        if(X>=67 && X<=45000)
        {
            printf("YES\n");

        }
        else
        {


            printf("NO\n");
    }
    }
    return 0;
}
