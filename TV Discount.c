#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,d,s,h;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        s=a-c;
        h=b-d;
        if(h>s){
            printf("First\n");}
        if(s>h){
            printf("Second\n");}
        if(s==h)
            {printf("Any\n");}

    }
    return 0;
}
