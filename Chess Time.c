#include<stdio.h>
int main ()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,s;
        scanf("%d",&n);
        s=(60*n)/20;
        printf("%d\n",s);

    }
    return 0;
}
