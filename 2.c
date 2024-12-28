
#include<stdio.h>
int main ()
{
    int A,B,T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d%d",&A,&B);
        if(A+B>6)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
