
#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if((a*3)<=b)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
