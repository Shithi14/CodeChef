#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,s,h,i;
        scanf("%d%d",&a,&b);
        s=a-b;
       h=a+(a*10)/100;
        i=h-s;
        printf("%d\n",i);
    }
    return 0;
}
