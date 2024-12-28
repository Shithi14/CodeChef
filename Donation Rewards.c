#include<stdio.h>
int main ()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n<=3)
            printf("BRONZE\n");
        if(n>3 && n<=6)printf("SILVER\n");
        if(n>6)printf("GOLD\n");

    }
    return 0;
}
