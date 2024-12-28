#include<stdio.h>
int main ()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,count=0,s=2;
        scanf("%d",&n);
        while(s<=n)
        {
            count++;
            s=s+7;
        }
        printf("%d\n",count);
    }
}
