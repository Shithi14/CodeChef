#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a>b && a>c)
            printf("setter\n");
        if(b>a&&b>c)
            printf("Tester\n");
        if(c>a&&c>b)
            printf("Editorialist\n");
    }
    return 0;
}
