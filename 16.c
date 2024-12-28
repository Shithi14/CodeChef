#include<stdio.h>
int main ()
{


int  N,M,T,i,t;
scanf("%d",&T);
for(i=1;i<=T;i++)
{
    scanf("%d%d",&N,&M);
    if(N>=M){
        t=N-M;
    printf("%d\n",t);
    }
    else
        {printf("0\n");
}
}
}
