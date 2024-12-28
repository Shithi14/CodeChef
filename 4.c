#include<stdio.h>
int main ()
{
    int A,T,X,Y,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d%d%d",&X,&Y,&A);
        if(A>=X && A<Y)
            printf("YES\n");
        else
            printf("NO\n");
    }

}
