
#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n<=70)
            printf("0\n");
        if(n>70 && n<=100)
            printf("500\n");
        if(n>100)
            printf("2000\n");

    }
    return 0;
}
