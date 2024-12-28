#include<stdio.h>
int main ()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,d,s,h;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        h=b-c;
        s=a+h*d;
        printf("%d\n",s);

    }
}
