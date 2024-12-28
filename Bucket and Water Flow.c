#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,d,s,h;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        s=a+c*d;
        if(s>b)printf("overFlow\n");
        else if(s==b)printf("filled\n");
        else printf("Unfilled\n");

    }
}
