#include<stdio.h>
int main ()
{
    int T,A,B;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&A,&B);
        if((B+A)%2==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
