#include<stdio.h>
int main ()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if(a<b)printf("FIRST\n");
        if(a==b)printf("ANY\n");
        if(a>b)printf("Second\n");
    }
    return 0;
}
