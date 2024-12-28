#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n<4)printf("MILD\n");
        if(n>=4 && n<7)
            printf("MEDIUM\n");
        if(n>=7)printf("HOT\n");
    }
    return 0;
}
