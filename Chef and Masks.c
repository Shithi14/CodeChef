#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,s,h;
        scanf("%d%d",&a,&b);
        s=a*100;
        h=b*10;
        if(s>=h)
            printf("Cloth\n");
        else
            printf("Disposable\n");
    }
    return 0;
}
