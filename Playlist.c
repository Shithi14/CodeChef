#include<stdio.h>
int main ()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,s;
        scanf("%d%d",&a,&b);
        s=3*b;
        if(a<s)
            printf("0\n");
        else
            printf("%d\n",a/s);
    }
}
