#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,s;
        scanf("%d%d",&a,&b);
        s=a*5;
        if(s>=b)printf("YES\n");
        else
            printf("NO\n");
    }

}
