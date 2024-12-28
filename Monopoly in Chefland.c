#include<stdio.h>
int main ()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,s;
        scanf("%d%d%d",&a,&b,&c);
        if((a+b<c) || (a+c<b)||(b+c<a))
            printf("Yes\n");
        else
        printf("No\n");
    }
}
