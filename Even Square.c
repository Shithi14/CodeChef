#include<stdio.h>
int main ()
{
    int i,n,s;
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
    {

        s=i*i;
printf("%d^2 = %d\n",i,s);

    }
return 0;

}
