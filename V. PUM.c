#include<stdio.h>
int main ()
{
    int n,i;
    scanf("%d",&n);
    int count=0,s=1;
    if(n==1){
        printf("%d",count);
    }
    else if(n==2)

        {
            printf("%d",s);
        }
        else
        {
            for(i=2;i<=n;i++)
            {
                int r=count+s;
                count=s;
                s=r;
            }
        }
        printf("%d",s);
    }
