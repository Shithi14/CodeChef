#include<stdio.h>
#include<string.h>
int main ()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str[4];
        gets(str);
        int count=0;
        if(str[0]=='Y' ||str[0]=='y')
            count++;
         if(str[1]=='E' ||str[1]=='e')
            count++;
             if(str[2]=='S' ||str[2]=='s')
            count++;
            if(count==3)
                printf("YES\n");
            else

                printf("NO\n");
    }
}
