#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,s;
        scanf("%d",&n);
        s=n%10;
        printf("%d\n",s);

    }
    return 0;

}
