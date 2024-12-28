#include<stdio.h>
int main ()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,r;
        scanf("%d",&n);
        r=n/10;
        if(n%10==9)
            r++;
        printf("%d\n",r);
    }
}
