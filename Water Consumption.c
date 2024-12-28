#include<stdio.h>
#include<string.h>
int main ()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        int n,i,count=0;
        scanf("%d",&n);
        char str[51];

        scanf("%s",str);

        for(i=0;i<n;i++)
        {
            if(str[i]!=str[i+1])
            {
                count++;
                i++;
            }
        }
        printf("%d\n",count);
}
}
