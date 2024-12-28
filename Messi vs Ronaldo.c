#include<stdio.h>
int main ()
{
    int a,b,x,y,s,h;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    s=a*2+b;
    h=x*2+y;
    if(s>h)
    printf("Messi\n");
    if (h>s)
        printf("Ronaldo\n");
    if(s==h)
        printf("Equal\n");
    return 0;


}
