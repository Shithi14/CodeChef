#include<stdio.h>
int main ()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(x<y)
        printf("Old\n");
    if(x>y)
        printf("New\n");
    if(x==y)
    printf("Same\n");
    return 0;
}
