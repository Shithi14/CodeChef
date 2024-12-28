#include<stdio.h>
int main ()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,s;
        scanf("%d",&a);
        s=(a*60)/30;
        printf("%d\n",s);
    }
    return 0;
}
