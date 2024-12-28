#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,s;
        scanf("%d%d%d",&a,&b,&c);
        s=a+b+c;
        if(s>=100 && a>=10 &&b>=10 &&c>=10)
            printf("PASS\n");
        else
            printf("FALL\n");
    }
}
