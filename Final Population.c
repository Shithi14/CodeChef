#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,z,sum;
        scanf("%d%d%d",&x,&y,&z);
        sum=(x+z)-y;
        printf("%d\n",sum);

    }
    return 0;
}
