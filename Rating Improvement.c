#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,w;
        scanf("%d%d",&a,&b);
        w=a+200;
        if(w==b)printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
