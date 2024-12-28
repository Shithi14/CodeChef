#include<stdio.h>
int main ()
{
    int A,B,X,T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d%d",&A,&B);
        if(A>=B)
            printf("%d\n",B);
        else
            printf("%d\n",A);
    }
}
