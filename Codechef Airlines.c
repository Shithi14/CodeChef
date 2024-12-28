#include<stdio.h>
int main (){
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(10*a>=b)
            printf("%d\n",b*c);
        else
            printf("%d\n",a*10*c);
    }
    return 0;
}
